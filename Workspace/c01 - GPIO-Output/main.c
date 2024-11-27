/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * 
 * School:      Universidad Nacional Autónoma de México | Facultad de Ingeniería
 * Department:  Ingeniería Electrónica
 * Subject:     Microprocesadores y Microcontroladores
 * Topic:		Tema 08 | Lenguaje C
 * Code:        c01 | GPIO - Output
 * Description: Proceso de configuración de los GPIO como salida para controlar los
 *              LED de la tarjeta de desarrollo EK-TM4C1294XL.
 * Author:      M. I. Christo Aldair Lara Tenorio
 * Date:        16 de noviembre de 2024
 * 
 */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Archivos de cabecera
 */
#include <stdint.h>                                                                 /*  Definición de los tamaños de tipo entero */
#include "NVIC.h"                                                                   /*  Macros para el uso de NVIC */
#include "SYSCTL.h"                                                                 /*  Macros para el uso de SYSCTL */
#include "GPIO.h"                                                                   /*  Macros para el uso de GPIO */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
#define LED_D1_Toggle()             (GPIO_PORTN_DATA_R ^= GPIO_PIN_1)               /*  PortN[1] */
#define LED_D2_Toggle()             (GPIO_PORTN_DATA_R ^= GPIO_PIN_0)               /*  PortN[0] */
#define LED_D3_Toggle()             (GPIO_PORTF_AHB_DATA_R ^= GPIO_PIN_4)           /*  PortF[4] */
#define LED_D4_Toggle()             (GPIO_PORTF_AHB_DATA_R ^= GPIO_PIN_0)           /*  PortF[0] */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Variables globales
 */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Funciones
 */
void GPIO_PortF_Init(void) {
    // 1. Habilitar la señal de reloj (RCGCGPIO) y esperar a que se estabilice (PRGPIO).
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;                                        /*	Habilitación del reloj del PortF */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5)) {}                                /*	Espera a que se estabilice el reloj del PortF */

    // 2. Configurar la dirección de los pines GPIO (GPIODIR).
    GPIO_PORTF_AHB_DIR_R |= (GPIO_PIN_4 | GPIO_PIN_0);                              /*	PortF[4,0] => Data direction -> Output */

    // 9. Habilitar las funciones digitales de los pines GPIO (GPIODEN).
    GPIO_PORTF_AHB_DEN_R |= (GPIO_PIN_4 | GPIO_PIN_0);                              /*	PortF[4,0] => Digital functions -> Enabled */
}

void GPIO_PortN_Init(void) {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R12;                                       /*	Habilitación del reloj del PortN */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R12)) {}                               /*	Espera a que se estabilice el reloj del PortN */

    GPIO_PORTN_DIR_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                  /*	PortN[1:0] => Data direction -> Output */
    GPIO_PORTN_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                  /*	PortN[1:0] => Digital functions -> Enabled */
}

void SysTick_Init(void) {
    // 1. Cargar el valor de cuenta del SysTick (STRELOAD).
    NVIC_ST_RELOAD_R = (4000000 & NVIC_ST_RELOAD_M);                                /*  Carga del valor de cuenta del SysTick */

    // 2. Limpiar el valor actual del SysTick (STCURRENT) al escribir cualquier valor.
    NVIC_ST_CURRENT_R = 0;                                                          /*	Limpieza del valor actual del SysTick */

    // 3. Configurar el SysTick para la operación requerida (STCTRL).
    NVIC_ST_CTRL_R |= NVIC_ST_CTRL_ENABLE;                                          /*  Habilitación del SysTick (f = 4MHz) */
}

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Función principal
 */
int main(void) {

    GPIO_PortF_Init();                                                              /*	Inicialización del GPIO PortF */
    GPIO_PortN_Init();                                                              /*	Inicialización del GPIO PortN */
	SysTick_Init();													    			/*	Inicialización del SysTick */

    while(1) {
        LED_D1_Toggle();                                                            /*	Conmutación del LED D1 */
        while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                           /*	Espera a que el SysTick termine la cuenta */

        LED_D2_Toggle();                                                            /*	Conmutación del LED D2 */
        while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                           /*	Espera a que el SysTick termine la cuenta */

        LED_D3_Toggle();                                                            /*	Conmutación del LED D3 */
        while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                           /*	Espera a que el SysTick termine la cuenta */

        LED_D4_Toggle();                                                            /*	Conmutación del LED D4 */
        while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                           /*	Espera a que el SysTick termine la cuenta */
    }
}
