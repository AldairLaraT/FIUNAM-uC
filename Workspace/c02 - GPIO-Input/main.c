/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * 
 * School:      Universidad Nacional Autónoma de México | Facultad de Ingeniería
 * Department:  Ingeniería Electrónica
 * Subject:     Microprocesadores y Microcontroladores
 * Topic:		Tema 08 | Lenguaje C
 * Code:        c02 | GPIO - Input
 * Description: Proceso de configuración de los GPIO como entrada para leer los SW
 *              de la tarjeta de desarrollo EK-TM4C1294XL.
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
#define SW1_Pressed                 (!(GPIO_PORTJ_AHB_DATA_R & GPIO_PIN_0))         /*  PortJ[0] */
#define SW1_notPressed              (GPIO_PORTJ_AHB_DATA_R & GPIO_PIN_0)            /*  PortJ[0] */
#define LED_D1_Toggle()             (GPIO_PORTN_DATA_R ^= GPIO_PIN_1)               /*  PortN[1] */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Variables globales
 */
uint32_t bounce = 100000;                                                           /*  Retardo de rebote de 25ms (f = 4MHz) */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Funciones
 */
void GPIO_PortJ_Init(void) {
    // 1. Habilitar la señal de reloj (RCGCGPIO) y esperar a que se estabilice (PRGPIO).
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R8;                                        /*	Habilitación del reloj del PortJ */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R8)) {}                                /*	Espera a que se estabilice el reloj del PortJ */

    // 2. Configurar la dirección de los pines GPIO (GPIODIR).
    GPIO_PORTJ_AHB_DIR_R &= ~GPIO_PIN_0;                                            /*	PortJ[0] => Data direction -> Input */

    // 8. Configurar los resistencias de Pull-Up (GPIOPUR) o Pull-Down (GPIOPDR), o
    //    la función Open Drain (GPIOODR) de los pines GPIO.
    GPIO_PORTJ_AHB_PUR_R |= GPIO_PIN_0;                                             /*  PortJ[0] => Pull-Up resistors -> Enabled */

    // 9. Habilitar las funciones digitales de los pines GPIO (GPIODEN).
    GPIO_PORTJ_AHB_DEN_R |= GPIO_PIN_0;                                             /*	PortJ[0] => Digital functions -> Enabled */
}

void GPIO_PortN_Init(void) {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R12;                                       /*	Habilitación del reloj del PortN */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R12)) {}                               /*	Espera a que se estabilice el reloj del PortN */

    GPIO_PORTN_DIR_R |= GPIO_PIN_1;                                                 /*	PortN[1] => Data direction -> Output */
    GPIO_PORTN_DEN_R |= GPIO_PIN_1;                                                 /*	PortN[1] => Digital functions -> Enabled */
}

void SysTick_OneShot(uint32_t Delay) {
    // 1. Cargar el valor de cuenta del SysTick (STRELOAD).
    NVIC_ST_RELOAD_R = (Delay & NVIC_ST_RELOAD_M);                                  /*  Carga del valor de cuenta del SysTick */

    // 2. Limpiar el valor actual del SysTick (STCURRENT) al escribir cualquier valor.
    NVIC_ST_CURRENT_R = 0;                                                          /*	Limpieza del valor actual del SysTick */

    // 3. Configurar el SysTick para la operación requerida (STCTRL).
    NVIC_ST_CTRL_R |= NVIC_ST_CTRL_ENABLE;                                          /*	Habilitación del SysTick (f = 4MHz) */

    // Limpiar el valor de cuenta del SysTick (STRELOAD) para deshabilitar el contador para el siguiente ciclo.
    NVIC_ST_RELOAD_R = 0;                                                           /*  Limpieza del valor de cuenta del SysTick */

    while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                               /*	Espera a que el SysTick termine la cuenta */
}

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Función principal
 */
int main(void) {

    GPIO_PortJ_Init();                                                              /*	Inicialización del GPIO PortJ */
    GPIO_PortN_Init();                                                              /*	Inicialización del GPIO PortN */

    while(1) {
        while (SW1_notPressed) {}                                                   /*  Espera a que se presione el SW1 */
        SysTick_OneShot(bounce);                                                    /*  Retardo de rebote con el SysTick */

        LED_D1_Toggle();                                                            /*	Conmutación del LED D1 */

        while (SW1_Pressed) {}                                                      /*  Espera a que se suelte el SW1 */
        SysTick_OneShot(bounce);                                                    /*  Retardo de rebote con el SysTick */
    }
}
