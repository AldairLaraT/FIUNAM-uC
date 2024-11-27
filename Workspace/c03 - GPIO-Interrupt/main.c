/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * 
 * School:      Universidad Nacional Autónoma de México | Facultad de Ingeniería
 * Department:  Ingeniería Electrónica
 * Subject:     Microprocesadores y Microcontroladores
 * Topic:		Tema 07 | Interrupciones y resets
 * Code:        c03 | GPIO - Interrupt
 * Description: Proceso de configuración de los GPIO como entrada con interrupción 
 * 				para leer los SW de la tarjeta de desarrollo EK-TM4C1294XL.
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
#define SW2_Pressed					(!(GPIO_PORTJ_AHB_DATA_R & GPIO_PIN_1))			/*	PortJ[1] */
#define LED_D1_Toggle()             (GPIO_PORTN_DATA_R ^= GPIO_PIN_1)               /*  PortN[1] */
#define LED_D2_Toggle()				(GPIO_PORTN_DATA_R ^= GPIO_PIN_0)				/*	PortN[0] */
#define LED_D3_Toggle()				(GPIO_PORTF_AHB_DATA_R ^= GPIO_PIN_4)			/*	PortF[4] */
#define LED_D4_Toggle()				(GPIO_PORTF_AHB_DATA_R ^= GPIO_PIN_0)			/*	PortF[0] */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Variables globales
 */
uint32_t bounce = 100000;                                                           /*  Retardo de rebote de 25ms (f = 4MHz) */
int cuenta = 0;

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Funciones
 */
void GPIO_PortF_Init(void) {
	SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;                                       	/*	Habilitación del reloj del PortF */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5)) {}                           	    /*	Espera a que se estabilice el reloj del PortF */

    GPIO_PORTF_AHB_DIR_R |= (GPIO_PIN_4 | GPIO_PIN_0);                            	/*	PortF[4,0] => Data direction -> Output */
    GPIO_PORTF_AHB_DEN_R |= (GPIO_PIN_4 | GPIO_PIN_0);                            	/*	PortF[4,0] => Digital functions -> Enabled */
}

void GPIO_PortJ_Init(void) {
    // 1. Habilitar la señal de reloj (RCGCGPIO) y esperar a que se estabilice (PRGPIO).
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R8;                                        /*	Habilitación del reloj del PortJ */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R8)) {}                                /*	Espera a que se estabilice el reloj del PortJ */

    // 2. Configurar la dirección de los pines GPIO (GPIODIR).
    GPIO_PORTJ_AHB_DIR_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);                            	/*	PortJ[1,0] => Data direction -> Input */

    // 8. Configurar los resistencias de Pull-Up (GPIOPUR) o Pull-Down (GPIOPDR), o
    //    la función Open Drain (GPIOODR) de los pines GPIO.
    GPIO_PORTJ_AHB_PUR_R |= (GPIO_PIN_1 | GPIO_PIN_0);								/*  PortJ[1,0] => Pull-Up resistors -> Enabled */

    // 9. Habilitar las funciones digitales de los pines GPIO (GPIODEN).
    GPIO_PORTJ_AHB_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Digital functions -> Enabled */

    // 10. Si se requiere interrupción:
    //  => Configurar el tipo de sensibilidad (GPIOIS) de los pines GPIO.
    //  => Configurar el tipo de evento (GPIOIBE y GPIOIEV) de los pines GPIO.
    //  => Se recomienda limpiar la bandera de interrupción (GPIOICR) de los pines GPIO.
    //  => Desenmascarar la interrupción (GPIOIM) de los pines GPIO.
    //  => Configurar el nivel de prioridad de la interrupción (PRIn).
    //  => Habilitar la interrupción (ENn).
	GPIO_PORTJ_AHB_IS_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Interrupt sense -> Edge-sensitive */
	GPIO_PORTJ_AHB_IBE_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Interrupt both edges -> Controlled by the GPIOIEV register */
	GPIO_PORTJ_AHB_IEV_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Interrupt event -> Falling edge triggers an interrupt */
	GPIO_PORTJ_AHB_ICR_R |= (GPIO_PIN_1 | GPIO_PIN_0);								/*  PortJ[1,0] => Interrupt is cleared */
	GPIO_PORTJ_AHB_IM_R |= (GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Interrupt mask -> Unmasked */

	NVIC_PRI12_R = (NVIC_PRI12_R & ~NVIC_PRI12_INT51_M) | (0 << NVIC_PRI12_INT51_S);	/*  PortJ => Interrupt priority -> 0 */
	NVIC_EN1_R |= 1 << (51 - 32);													/*	Interrupt 51 (PortJ) => Enabled */
}

void GPIO_PortN_Init(void) {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R12;                                       /*	Habilitación del reloj del PortN */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R12)) {}                               /*	Espera a que se estabilice el reloj del PortN */

    GPIO_PORTN_DIR_R |= (GPIO_PIN_1 | GPIO_PIN_0);  								/*	PortN[1,0] => Data direction -> Output */
    GPIO_PORTN_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);  								/*	PortN[1,0] => Digital functions -> Enabled */
}

void SysTick_OneShot(uint32_t Delay) {
    NVIC_ST_RELOAD_R = (Delay & NVIC_ST_RELOAD_M);                                  /*  Carga del valor de cuenta del SysTick */
    NVIC_ST_CURRENT_R = 0;                                                          /*	Limpieza del valor actual del SysTick */
    NVIC_ST_CTRL_R |= NVIC_ST_CTRL_ENABLE;                                          /*	Habilitación del SysTick (f = 4MHz) */
    NVIC_ST_RELOAD_R = 0;                                                           /*  Limpieza del valor de cuenta del SysTick */
    while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                               /*	Espera a que el SysTick termine la cuenta */
}

void GPIO_PortJ_Handler(void) {
	SysTick_OneShot(bounce);														/*  Retardo de rebote con el SysTick */
	
	if (SW1_Pressed) {																/*	Validación del SW1 */
		cuenta += 1;
	}
	if (SW2_Pressed) {																/*	Validación del SW2 */
		cuenta -= 1;
	}

	GPIO_PORTJ_AHB_ICR_R |= (GPIO_PIN_1 | GPIO_PIN_0);								/*	PortJ[1,0] => Interrupt is cleared */
}

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Función principal
 */
int main(void) {

	GPIO_PortF_Init();																/*	Inicialización del GPIO PortF */
    GPIO_PortJ_Init();                                                              /*	Inicialización del GPIO PortJ */
    GPIO_PortN_Init();                                                              /*	Inicialización del GPIO PortN */

	int i;

    while(1) {
        LED_D1_Toggle();                                                            /*	Conmutación del LED D1 */
		for (i = 0; i < 700000; i++) {}												/*	Retardo aproximado de 500ms */

		LED_D2_Toggle();                                                            /*	Conmutación del LED D2 */
		for (i = 0; i < 700000; i++) {}												/*	Retardo aproximado de 500ms */

        LED_D3_Toggle();                                                            /*	Conmutación del LED D3 */
		for (i = 0; i < 700000; i++) {}												/*	Retardo aproximado de 500ms */

        LED_D4_Toggle();                                                            /*	Conmutación del LED D4 */
		for (i = 0; i < 700000; i++) {}												/*	Retardo aproximado de 500ms */
    }
}
