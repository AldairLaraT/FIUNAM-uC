/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * 
 * School:      Universidad Nacional Autónoma de México | Facultad de Ingeniería
 * Department:  Ingeniería Electrónica
 * Subject:     Microprocesadores y Microcontroladores
 * Topic:		Tema 09 | Periféricos
 * Code:        c04 | ADC
 * Description: Proceso de configuración del ADC0 y el secuenciador SS1 para leer el
 * 				valor de un potenciometro con la entrada analógica AIN10 (PB4) y 
 * 				encender los LED de la tarjeta de desarrollo EK-TM4C1294XL.
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
#include "ADC.h"																	/*	Macros para el uso de ADC */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
#define LED_D1_On()					(GPIO_PORTN_DATA_R |= GPIO_PIN_1)				/*	PortN[1] */
#define LED_D2_On()					(GPIO_PORTN_DATA_R |= GPIO_PIN_0)				/*	PortN[0] */
#define LED_D3_On()					(GPIO_PORTF_AHB_DATA_R |= GPIO_PIN_4)			/*	PortF[4] */
#define LED_D4_On()					(GPIO_PORTF_AHB_DATA_R |= GPIO_PIN_0)			/*	PortF[0] */
#define LED_D1_Off()				(GPIO_PORTN_DATA_R &= ~GPIO_PIN_1)				/*	PortN[1] */
#define LED_D2_Off()				(GPIO_PORTN_DATA_R &= ~GPIO_PIN_0)				/*	PortN[0] */
#define LED_D3_Off()				(GPIO_PORTF_AHB_DATA_R &= ~GPIO_PIN_4)			/*	PortF[4] */
#define LED_D4_Off()				(GPIO_PORTF_AHB_DATA_R &= ~GPIO_PIN_0)			/*	PortF[0] */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Variables globales
 */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Funciones
 */
void GPIO_PortF_Init(void) {
	SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;                                       	/*	Habilitación del reloj del PortF */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5)) {}                           		/*	Espera a que se estabilice el reloj del PortF */

    GPIO_PORTF_AHB_DIR_R |= (GPIO_PIN_4 | GPIO_PIN_0);                            	/*	PortF[4,0] => Data direction -> Output */
    GPIO_PORTF_AHB_DEN_R |= (GPIO_PIN_4 | GPIO_PIN_0);                            	/*	PortF[4,0] => Digital functions -> Enabled */
}

void GPIO_PortN_Init(void) {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R12;                                       /*	Habilitación del reloj del PortN */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R12)) {}                           	/*	Espera a que se estabilice el reloj del PortN */

    GPIO_PORTN_DIR_R |= (GPIO_PIN_1 | GPIO_PIN_0);  								/*	PortN[1,0] => Data direction -> Output */
    GPIO_PORTN_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);  								/*	PortN[1,0] => Digital functions -> Enabled */
}

void ADC0_Init(void) {
	/*	Inicialización del ADC */
	// 1. Habilitar la señal de reloj (RCGCADC) y esperar a que se estabilice (PRADC).
	SYSCTL_RCGCADC_R |= SYSCTL_RCGCADC_R0;											/*	Habilitación del reloj del ADC0 */
	while (!(SYSCTL_PRADC_R & SYSCTL_PRADC_R0)) {}									/*	Espera a que se estabilice el reloj del ADC0*/

	// 2. Habilitar la señal de reloj (RCGCGPIO) y esperar a que se estabilice (PRGPIO).
	SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R1;										/*	Habilitación del reloj del PortB */
	while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R1)) {}								/*	Espera a que se estabilice el reloj del PortB */

	// 3. Habilitar la función alterna de hardware de los pines GPIO (GPIOAFSEL).
	GPIO_PORTB_AHB_AFSEL_R |= GPIO_PIN_4;											/*	PortB[4] => Alternate hardware function -> Enabled */

    // 4. Deshabilitar las funciones digitales de los pines GPIO (GPIODEN).
	GPIO_PORTB_AHB_DEN_R &= ~GPIO_PIN_4;											/*	PortB[4] => Digital functions -> Disabled */

	// 5. Deshabilitar el circuito de aislamiento de los pines GPIO (GPIOAMSEL).
	GPIO_PORTB_AHB_AMSEL_R |= GPIO_PIN_4;											/*	PortB[4] => Isolation -> Disabled */

	// 6. Configurar los niveles de prioridad de los secuenciadores de muestras (ADCSSPRI).
	ADC0_SSPRI_R = (ADC0_SSPRI_R & ~ADC_SSPRI_SS3_M) | (3 << 12);					/*	ADC0 => SS3 Priority -> 3 (lowest) */
	ADC0_SSPRI_R = (ADC0_SSPRI_R & ~ADC_SSPRI_SS2_M) | (2 << 8);					/*	ADC0 => SS2 Priority -> 2 */
	ADC0_SSPRI_R = (ADC0_SSPRI_R & ~ADC_SSPRI_SS1_M) | (1 << 4);					/*	ADC0 => SS1 Priority -> 1 */
	ADC0_SSPRI_R = (ADC0_SSPRI_R & ~ADC_SSPRI_SS0_M) | (0 << 0);					/*	ADC0 => SS0 Priority -> 0 (highest) */
	
	/*	Configuración del secuenciador de muestras */
	// 1. Asegurarse de que el secuenciador de muestras está deshabilitado (ADCACTSS).
	ADC0_ACTSS_R &= ~ADC_ACTSS_ASEN1;												/*	ADC0 => SS1 -> Disabled */

	// 2. Configurar el evento de disparo del secuenciador de muestras (ADCEMUX).
	ADC0_EMUX_R = (ADC0_EMUX_R & ~ADC_EMUX_EM1_M) | (0 << 4);						/*	ADC0 => SS1 -> Processor: Trigger initiated by setting the SSn bit in the ADCPSSI register */

	// 3. Si se usa un generador PWM como fuente de disparo, especificar el módulo
	//	  PWM (ADCTSSEL).
	ADC0_SSMUX1_R = (ADC0_SSMUX1_R & ADC_SSMUX1_MUX3_M) | (0 << ADC_SSMUX1_MUX3_S);	/*	ADC0 => SS1 4th Sample Input Select -> 0 */
	ADC0_SSMUX1_R = (ADC0_SSMUX1_R & ADC_SSMUX1_MUX2_M) | (0 << ADC_SSMUX1_MUX2_S);	/*	ADC0 => SS1 3rd Sample Input Select -> 0 */
	ADC0_SSMUX1_R = (ADC0_SSMUX1_R & ADC_SSMUX1_MUX1_M) | (0 << ADC_SSMUX1_MUX1_S);	/*	ADC0 => SS1 2nd Sample Input Select -> 0 */
	ADC0_SSMUX1_R = (ADC0_SSMUX1_R & ADC_SSMUX1_MUX0_M) | (10 << ADC_SSMUX1_MUX0_S);	/*	ADC0 => SS1 1st Sample Input Select -> AIN10 */

	// 4. Para cada secuenciador de muestras, configurar las fuentes de entrada 
	//	  (ADCSSMUXn y ADCSSEMUXn).
	ADC0_SSEMUX1_R &= ~ADC_SSEMUX1_EMUX0;											/*	ADC0 => SS1 1st Sample Input Selected from AIN[15:0] */

	// 5. Para cada secuenciador de muestras, configurar los bits de control de muestreo
	//	  en el nibble correspondiente (ADCSSCTLn), asegurándose de que el campo END de 
	//	  la última muestra esté habilitado.
	ADC0_SSCTL1_R = (ADC_SSCTL1_IE0 | ADC_SSCTL1_END0);								/*	ADC0 => SS1 1st Sample: [TS]	Input pin specified by the ADCSSMUXn register
																												[IE] 	Raw interrupt signal is asserted at the end of the first sample's conversioN
																												[END] 	Is the last sample of the sequence
																												[D] 	The analog inputs are not differentially sampled */

	// 6. Si se requiere interrupción:
    //  => Desenmascarar la interrupción (ADCIM) del ADC.
    //  => Configurar el nivel de prioridad de la interrupción (PRIn).
    //  => Habilitar la interrupción (ENn).

	// 7. Habilitar el secuenciador de muestras (ADCACTSS).
	ADC0_ACTSS_R |= ADC_ACTSS_ASEN1;												/*	ADC0 => SS1 -> Enabled */

	// Para usar al PIOSC de 16MHz como fuente de reloj:
	//	=> Encender el PLL.
	//	=> Esperar a que el PLL esté encendido y retroalimentado.
	//	=> Habilitar el PIOSC en el CS field del ADCCC.
	//	=> Deshabilitar el PLL.
	SYSCTL_PLLFREQ0_R |= SYSCTL_PLLFREQ0_PLLPWR;									/*	PLL => Enabled and oscillate based on the values in the PLLFREQ0 and PLLFREQ1 registers */
    while (!(SYSCTL_PLLSTAT_R & SYSCTL_PLLSTAT_LOCK)) {}							/*	Esperar a que el PLL esté encendido y retroalimentado */
	ADC0_CC_R = (ADC0_CC_R & ADC_CC_CS_M) | ADC_CC_CS_PIOSC;						/*	ADC0 => Alternate clock source as defined by ALTCLKCFG register (default: PIOSC) */
    SYSCTL_PLLFREQ0_R &= ~SYSCTL_PLLFREQ0_PLLPWR;									/*	PLL => Disabled */
}

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Función principal
 */
int main(void) {

	GPIO_PortF_Init();																/*	Inicialización del GPIO PortF */
    GPIO_PortN_Init();                                                              /*	Inicialización del GPIO PortN */
	ADC0_Init();																	/*	Inicialización del ADC0 */

	uint16_t ain10;

    while(1) {
		ADC0_PSSI_R |= ADC_PSSI_SS1;												/*	ADC0 => SS1 Initiate */
		while (!(ADC0_RIS_R & ADC_RIS_INR1)) {}										/*	ADC0 => SS1 Raw Interrupt Status -> Espera a que el ADC termine la conversión */
		ain10 = (ADC0_SSFIFO1_R & ADC_SSFIFO1_DATA_M);								/*	ADC0 => SS1 -> Lectura del resultado de conversión de la primera muestra */
		ADC0_ISC_R |= ADC_ISC_IN1;													/*	ADC0 => Limpieza de las banderas IN1 (ADCISC) y INR1 (ADCRIS) */

		switch (ain10) {
		case 0 ... 799:
			LED_D1_Off();
			LED_D2_Off();
			LED_D3_Off();
			LED_D4_Off();
			break;
		case 800 ... 1599:
			LED_D1_On();
			LED_D2_Off();
			LED_D3_Off();
			LED_D4_Off();
			break;
		case 1600 ... 2399:
			LED_D1_On();
			LED_D2_On();
			LED_D3_Off();
			LED_D4_Off();
			break;
		case 2400 ... 3199:
			LED_D1_On();
			LED_D2_On();
			LED_D3_On();
			LED_D4_Off();
			break;
		default:
			LED_D1_On();
			LED_D2_On();
			LED_D3_On();
			LED_D4_On();
			break;
		}
    }
}
