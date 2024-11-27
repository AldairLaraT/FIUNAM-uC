/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apuntadores a registros
 */

/**
 * General-Purpose Input/Output (GPIO) registers										pp757	Register map
 */
	// GPIO Port A (PortA)
#define GPIO_PORTA_AHB_DATA_R       (*((volatile uint32_t *)0x400583FC))	        /*	pp759	GPIO Data */
#define GPIO_PORTA_AHB_DIR_R        (*((volatile uint32_t *)0x40058400))			/*	pp760	GPIO Direction */
#define GPIO_PORTA_AHB_IS_R         (*((volatile uint32_t *)0x40058404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTA_AHB_IBE_R        (*((volatile uint32_t *)0x40058408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTA_AHB_IEV_R        (*((volatile uint32_t *)0x4005840C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTA_AHB_IM_R         (*((volatile uint32_t *)0x40058410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTA_AHB_RIS_R        (*((volatile uint32_t *)0x40058414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTA_AHB_MIS_R        (*((volatile uint32_t *)0x40058418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTA_AHB_ICR_R        (*((volatile uint32_t *)0x4005841C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTA_AHB_AFSEL_R      (*((volatile uint32_t *)0x40058420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTA_AHB_DR2R_R       (*((volatile uint32_t *)0x40058500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTA_AHB_DR4R_R       (*((volatile uint32_t *)0x40058504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTA_AHB_DR8R_R       (*((volatile uint32_t *)0x40058508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTA_AHB_ODR_R        (*((volatile uint32_t *)0x4005850C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTA_AHB_PUR_R        (*((volatile uint32_t *)0x40058510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTA_AHB_PDR_R        (*((volatile uint32_t *)0x40058514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTA_AHB_SLR_R        (*((volatile uint32_t *)0x40058518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTA_AHB_DEN_R        (*((volatile uint32_t *)0x4005851C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTA_AHB_LOCK_R       (*((volatile uint32_t *)0x40058520))			/*	pp783	GPIO Lock */
#define GPIO_PORTA_AHB_CR_R         (*((volatile uint32_t *)0x40058524))			/*	pp784	GPIO Commit */
#define GPIO_PORTA_AHB_AMSEL_R      (*((volatile uint32_t *)0x40058528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTA_AHB_PCTL_R       (*((volatile uint32_t *)0x4005852C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTA_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40058530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTA_AHB_DMACTL_R     (*((volatile uint32_t *)0x40058534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTA_AHB_SI_R         (*((volatile uint32_t *)0x40058538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTA_AHB_DR12R_R      (*((volatile uint32_t *)0x4005853C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTA_AHB_PP_R         (*((volatile uint32_t *)0x40058FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTA_AHB_PC_R         (*((volatile uint32_t *)0x40058FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port B (PortB)
#define GPIO_PORTB_AHB_DATA_R       (*((volatile uint32_t *)0x400593FC))			/*	pp759	GPIO Data */
#define GPIO_PORTB_AHB_DIR_R        (*((volatile uint32_t *)0x40059400))			/*	pp760	GPIO Direction */
#define GPIO_PORTB_AHB_IS_R         (*((volatile uint32_t *)0x40059404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTB_AHB_IBE_R        (*((volatile uint32_t *)0x40059408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTB_AHB_IEV_R        (*((volatile uint32_t *)0x4005940C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTB_AHB_IM_R         (*((volatile uint32_t *)0x40059410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTB_AHB_RIS_R        (*((volatile uint32_t *)0x40059414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTB_AHB_MIS_R        (*((volatile uint32_t *)0x40059418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTB_AHB_ICR_R        (*((volatile uint32_t *)0x4005941C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTB_AHB_AFSEL_R      (*((volatile uint32_t *)0x40059420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTB_AHB_DR2R_R       (*((volatile uint32_t *)0x40059500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTB_AHB_DR4R_R       (*((volatile uint32_t *)0x40059504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTB_AHB_DR8R_R       (*((volatile uint32_t *)0x40059508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTB_AHB_ODR_R        (*((volatile uint32_t *)0x4005950C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTB_AHB_PUR_R        (*((volatile uint32_t *)0x40059510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTB_AHB_PDR_R        (*((volatile uint32_t *)0x40059514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTB_AHB_SLR_R        (*((volatile uint32_t *)0x40059518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTB_AHB_DEN_R        (*((volatile uint32_t *)0x4005951C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTB_AHB_LOCK_R       (*((volatile uint32_t *)0x40059520))			/*	pp783	GPIO Lock */
#define GPIO_PORTB_AHB_CR_R         (*((volatile uint32_t *)0x40059524))			/*	pp784	GPIO Commit */
#define GPIO_PORTB_AHB_AMSEL_R      (*((volatile uint32_t *)0x40059528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTB_AHB_PCTL_R       (*((volatile uint32_t *)0x4005952C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTB_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40059530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTB_AHB_DMACTL_R     (*((volatile uint32_t *)0x40059534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTB_AHB_SI_R         (*((volatile uint32_t *)0x40059538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTB_AHB_DR12R_R      (*((volatile uint32_t *)0x4005953C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTB_AHB_PP_R         (*((volatile uint32_t *)0x40059FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTB_AHB_PC_R         (*((volatile uint32_t *)0x40059FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port C (PortC)
#define GPIO_PORTC_AHB_DATA_R       (*((volatile uint32_t *)0x4005A3FC))			/*	pp759	GPIO Data */
#define GPIO_PORTC_AHB_DIR_R        (*((volatile uint32_t *)0x4005A400))			/*	pp760	GPIO Direction */
#define GPIO_PORTC_AHB_IS_R         (*((volatile uint32_t *)0x4005A404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTC_AHB_IBE_R        (*((volatile uint32_t *)0x4005A408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTC_AHB_IEV_R        (*((volatile uint32_t *)0x4005A40C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTC_AHB_IM_R         (*((volatile uint32_t *)0x4005A410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTC_AHB_RIS_R        (*((volatile uint32_t *)0x4005A414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTC_AHB_MIS_R        (*((volatile uint32_t *)0x4005A418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTC_AHB_ICR_R        (*((volatile uint32_t *)0x4005A41C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTC_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005A420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTC_AHB_DR2R_R       (*((volatile uint32_t *)0x4005A500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTC_AHB_DR4R_R       (*((volatile uint32_t *)0x4005A504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTC_AHB_DR8R_R       (*((volatile uint32_t *)0x4005A508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTC_AHB_ODR_R        (*((volatile uint32_t *)0x4005A50C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTC_AHB_PUR_R        (*((volatile uint32_t *)0x4005A510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTC_AHB_PDR_R        (*((volatile uint32_t *)0x4005A514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTC_AHB_SLR_R        (*((volatile uint32_t *)0x4005A518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTC_AHB_DEN_R        (*((volatile uint32_t *)0x4005A51C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTC_AHB_LOCK_R       (*((volatile uint32_t *)0x4005A520))			/*	pp783	GPIO Lock */
#define GPIO_PORTC_AHB_CR_R         (*((volatile uint32_t *)0x4005A524))			/*	pp784	GPIO Commit */
#define GPIO_PORTC_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005A528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTC_AHB_PCTL_R       (*((volatile uint32_t *)0x4005A52C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTC_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005A530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTC_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005A534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTC_AHB_SI_R         (*((volatile uint32_t *)0x4005A538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTC_AHB_DR12R_R      (*((volatile uint32_t *)0x4005A53C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTC_AHB_PP_R         (*((volatile uint32_t *)0x4005AFC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTC_AHB_PC_R         (*((volatile uint32_t *)0x4005AFC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port D (PortD)
#define GPIO_PORTD_AHB_DATA_R       (*((volatile uint32_t *)0x4005B3FC))			/*	pp759	GPIO Data */
#define GPIO_PORTD_AHB_DIR_R        (*((volatile uint32_t *)0x4005B400))			/*	pp760	GPIO Direction */
#define GPIO_PORTD_AHB_IS_R         (*((volatile uint32_t *)0x4005B404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTD_AHB_IBE_R        (*((volatile uint32_t *)0x4005B408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTD_AHB_IEV_R        (*((volatile uint32_t *)0x4005B40C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTD_AHB_IM_R         (*((volatile uint32_t *)0x4005B410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTD_AHB_RIS_R        (*((volatile uint32_t *)0x4005B414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTD_AHB_MIS_R        (*((volatile uint32_t *)0x4005B418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTD_AHB_ICR_R        (*((volatile uint32_t *)0x4005B41C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTD_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005B420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTD_AHB_DR2R_R       (*((volatile uint32_t *)0x4005B500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTD_AHB_DR4R_R       (*((volatile uint32_t *)0x4005B504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTD_AHB_DR8R_R       (*((volatile uint32_t *)0x4005B508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTD_AHB_ODR_R        (*((volatile uint32_t *)0x4005B50C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTD_AHB_PUR_R        (*((volatile uint32_t *)0x4005B510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTD_AHB_PDR_R        (*((volatile uint32_t *)0x4005B514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTD_AHB_SLR_R        (*((volatile uint32_t *)0x4005B518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTD_AHB_DEN_R        (*((volatile uint32_t *)0x4005B51C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTD_AHB_LOCK_R       (*((volatile uint32_t *)0x4005B520))			/*	pp783	GPIO Lock */
#define GPIO_PORTD_AHB_CR_R         (*((volatile uint32_t *)0x4005B524))			/*	pp784	GPIO Commit */
#define GPIO_PORTD_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005B528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTD_AHB_PCTL_R       (*((volatile uint32_t *)0x4005B52C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTD_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005B530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTD_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005B534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTD_AHB_SI_R         (*((volatile uint32_t *)0x4005B538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTD_AHB_DR12R_R      (*((volatile uint32_t *)0x4005B53C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTD_AHB_PP_R         (*((volatile uint32_t *)0x4005BFC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTD_AHB_PC_R         (*((volatile uint32_t *)0x4005BFC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port E (PortE)
#define GPIO_PORTE_AHB_DATA_R       (*((volatile uint32_t *)0x4005C3FC))			/*	pp759	GPIO Data */
#define GPIO_PORTE_AHB_DIR_R        (*((volatile uint32_t *)0x4005C400))			/*	pp760	GPIO Direction */
#define GPIO_PORTE_AHB_IS_R         (*((volatile uint32_t *)0x4005C404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTE_AHB_IBE_R        (*((volatile uint32_t *)0x4005C408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTE_AHB_IEV_R        (*((volatile uint32_t *)0x4005C40C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTE_AHB_IM_R         (*((volatile uint32_t *)0x4005C410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTE_AHB_RIS_R        (*((volatile uint32_t *)0x4005C414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTE_AHB_MIS_R        (*((volatile uint32_t *)0x4005C418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTE_AHB_ICR_R        (*((volatile uint32_t *)0x4005C41C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTE_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005C420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTE_AHB_DR2R_R       (*((volatile uint32_t *)0x4005C500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTE_AHB_DR4R_R       (*((volatile uint32_t *)0x4005C504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTE_AHB_DR8R_R       (*((volatile uint32_t *)0x4005C508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTE_AHB_ODR_R        (*((volatile uint32_t *)0x4005C50C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTE_AHB_PUR_R        (*((volatile uint32_t *)0x4005C510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTE_AHB_PDR_R        (*((volatile uint32_t *)0x4005C514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTE_AHB_SLR_R        (*((volatile uint32_t *)0x4005C518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTE_AHB_DEN_R        (*((volatile uint32_t *)0x4005C51C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTE_AHB_LOCK_R       (*((volatile uint32_t *)0x4005C520))			/*	pp783	GPIO Lock */
#define GPIO_PORTE_AHB_CR_R         (*((volatile uint32_t *)0x4005C524))			/*	pp784	GPIO Commit */
#define GPIO_PORTE_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005C528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTE_AHB_PCTL_R       (*((volatile uint32_t *)0x4005C52C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTE_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005C530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTE_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005C534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTE_AHB_SI_R         (*((volatile uint32_t *)0x4005C538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTE_AHB_DR12R_R      (*((volatile uint32_t *)0x4005C53C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTE_AHB_PP_R         (*((volatile uint32_t *)0x4005CFC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTE_AHB_PC_R         (*((volatile uint32_t *)0x4005CFC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port F (PortF)
#define GPIO_PORTF_AHB_DATA_R       (*((volatile uint32_t *)0x4005D3FC))			/*	pp759	GPIO Data */
#define GPIO_PORTF_AHB_DIR_R        (*((volatile uint32_t *)0x4005D400))			/*	pp760	GPIO Direction */
#define GPIO_PORTF_AHB_IS_R         (*((volatile uint32_t *)0x4005D404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTF_AHB_IBE_R        (*((volatile uint32_t *)0x4005D408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTF_AHB_IEV_R        (*((volatile uint32_t *)0x4005D40C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTF_AHB_IM_R         (*((volatile uint32_t *)0x4005D410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTF_AHB_RIS_R        (*((volatile uint32_t *)0x4005D414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTF_AHB_MIS_R        (*((volatile uint32_t *)0x4005D418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTF_AHB_ICR_R        (*((volatile uint32_t *)0x4005D41C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTF_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005D420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTF_AHB_DR2R_R       (*((volatile uint32_t *)0x4005D500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTF_AHB_DR4R_R       (*((volatile uint32_t *)0x4005D504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTF_AHB_DR8R_R       (*((volatile uint32_t *)0x4005D508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTF_AHB_ODR_R        (*((volatile uint32_t *)0x4005D50C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTF_AHB_PUR_R        (*((volatile uint32_t *)0x4005D510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTF_AHB_PDR_R        (*((volatile uint32_t *)0x4005D514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTF_AHB_SLR_R        (*((volatile uint32_t *)0x4005D518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTF_AHB_DEN_R        (*((volatile uint32_t *)0x4005D51C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTF_AHB_LOCK_R       (*((volatile uint32_t *)0x4005D520))			/*	pp783	GPIO Lock */
#define GPIO_PORTF_AHB_CR_R         (*((volatile uint32_t *)0x4005D524))			/*	pp784	GPIO Commit */
#define GPIO_PORTF_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005D528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTF_AHB_PCTL_R       (*((volatile uint32_t *)0x4005D52C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTF_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005D530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTF_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005D534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTF_AHB_SI_R         (*((volatile uint32_t *)0x4005D538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTF_AHB_DR12R_R      (*((volatile uint32_t *)0x4005D53C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTF_AHB_PP_R         (*((volatile uint32_t *)0x4005DFC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTF_AHB_PC_R         (*((volatile uint32_t *)0x4005DFC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port G (PortG)
#define GPIO_PORTG_AHB_DATA_R       (*((volatile uint32_t *)0x4005E3FC))		    /*	pp759	GPIO Data */
#define GPIO_PORTG_AHB_DIR_R        (*((volatile uint32_t *)0x4005E400))		    /*	pp760	GPIO Direction */
#define GPIO_PORTG_AHB_IS_R         (*((volatile uint32_t *)0x4005E404))		    /*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTG_AHB_IBE_R        (*((volatile uint32_t *)0x4005E408))		    /*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTG_AHB_IEV_R        (*((volatile uint32_t *)0x4005E40C))		    /*	pp763	GPIO Interrupt Event */
#define GPIO_PORTG_AHB_IM_R         (*((volatile uint32_t *)0x4005E410))		    /*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTG_AHB_RIS_R        (*((volatile uint32_t *)0x4005E414))		    /*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTG_AHB_MIS_R        (*((volatile uint32_t *)0x4005E418))		    /*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTG_AHB_ICR_R        (*((volatile uint32_t *)0x4005E41C))		    /*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTG_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005E420))		    /*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTG_AHB_DR2R_R       (*((volatile uint32_t *)0x4005E500))		    /*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTG_AHB_DR4R_R       (*((volatile uint32_t *)0x4005E504))		    /*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTG_AHB_DR8R_R       (*((volatile uint32_t *)0x4005E508))		    /*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTG_AHB_ODR_R        (*((volatile uint32_t *)0x4005E50C))		    /*	pp775	GPIO Open Drain Select */
#define GPIO_PORTG_AHB_PUR_R        (*((volatile uint32_t *)0x4005E510))		    /*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTG_AHB_PDR_R        (*((volatile uint32_t *)0x4005E514))		    /*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTG_AHB_SLR_R        (*((volatile uint32_t *)0x4005E518))		    /*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTG_AHB_DEN_R        (*((volatile uint32_t *)0x4005E51C))		    /*	pp781	GPIO Digital Enable */
#define GPIO_PORTG_AHB_LOCK_R       (*((volatile uint32_t *)0x4005E520))		    /*	pp783	GPIO Lock */
#define GPIO_PORTG_AHB_CR_R         (*((volatile uint32_t *)0x4005E524))		    /*	pp784	GPIO Commit */
#define GPIO_PORTG_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005E528))		    /*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTG_AHB_PCTL_R       (*((volatile uint32_t *)0x4005E52C))		    /*	pp787	GPIO Port Control */
#define GPIO_PORTG_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005E530))		    /*	pp789	GPIO ADC Control */
#define GPIO_PORTG_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005E534))		    /*	pp790	GPIO DMA Control */
#define GPIO_PORTG_AHB_SI_R         (*((volatile uint32_t *)0x4005E538))		    /*	pp791	GPIO Select Interrupt */
#define GPIO_PORTG_AHB_DR12R_R      (*((volatile uint32_t *)0x4005E53C))		    /*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTG_AHB_PP_R         (*((volatile uint32_t *)0x4005EFC0))		    /*	pp799	GPIO Peripheral Property */
#define GPIO_PORTG_AHB_PC_R         (*((volatile uint32_t *)0x4005EFC4))		    /*	pp800	GPIO Peripheral Configuration */
	// GPIO Port H (PortH)
#define GPIO_PORTH_AHB_DATA_R       (*((volatile uint32_t *)0x4005F3FC))			/*	pp759	GPIO Data */
#define GPIO_PORTH_AHB_DIR_R        (*((volatile uint32_t *)0x4005F400))			/*	pp760	GPIO Direction */
#define GPIO_PORTH_AHB_IS_R         (*((volatile uint32_t *)0x4005F404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTH_AHB_IBE_R        (*((volatile uint32_t *)0x4005F408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTH_AHB_IEV_R        (*((volatile uint32_t *)0x4005F40C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTH_AHB_IM_R         (*((volatile uint32_t *)0x4005F410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTH_AHB_RIS_R        (*((volatile uint32_t *)0x4005F414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTH_AHB_MIS_R        (*((volatile uint32_t *)0x4005F418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTH_AHB_ICR_R        (*((volatile uint32_t *)0x4005F41C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTH_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005F420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTH_AHB_DR2R_R       (*((volatile uint32_t *)0x4005F500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTH_AHB_DR4R_R       (*((volatile uint32_t *)0x4005F504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTH_AHB_DR8R_R       (*((volatile uint32_t *)0x4005F508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTH_AHB_ODR_R        (*((volatile uint32_t *)0x4005F50C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTH_AHB_PUR_R        (*((volatile uint32_t *)0x4005F510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTH_AHB_PDR_R        (*((volatile uint32_t *)0x4005F514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTH_AHB_SLR_R        (*((volatile uint32_t *)0x4005F518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTH_AHB_DEN_R        (*((volatile uint32_t *)0x4005F51C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTH_AHB_LOCK_R       (*((volatile uint32_t *)0x4005F520))			/*	pp783	GPIO Lock */
#define GPIO_PORTH_AHB_CR_R         (*((volatile uint32_t *)0x4005F524))			/*	pp784	GPIO Commit */
#define GPIO_PORTH_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005F528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTH_AHB_PCTL_R       (*((volatile uint32_t *)0x4005F52C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTH_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005F530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTH_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005F534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTH_AHB_SI_R         (*((volatile uint32_t *)0x4005F538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTH_AHB_DR12R_R      (*((volatile uint32_t *)0x4005F53C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTH_AHB_PP_R         (*((volatile uint32_t *)0x4005FFC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTH_AHB_PC_R         (*((volatile uint32_t *)0x4005FFC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port J (PortJ)
#define GPIO_PORTJ_AHB_DATA_R       (*((volatile uint32_t *)0x400603FC))			/*	pp759	GPIO Data */
#define GPIO_PORTJ_AHB_DIR_R        (*((volatile uint32_t *)0x40060400))			/*	pp760	GPIO Direction */
#define GPIO_PORTJ_AHB_IS_R         (*((volatile uint32_t *)0x40060404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTJ_AHB_IBE_R        (*((volatile uint32_t *)0x40060408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTJ_AHB_IEV_R        (*((volatile uint32_t *)0x4006040C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTJ_AHB_IM_R         (*((volatile uint32_t *)0x40060410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTJ_AHB_RIS_R        (*((volatile uint32_t *)0x40060414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTJ_AHB_MIS_R        (*((volatile uint32_t *)0x40060418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTJ_AHB_ICR_R        (*((volatile uint32_t *)0x4006041C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTJ_AHB_AFSEL_R      (*((volatile uint32_t *)0x40060420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTJ_AHB_DR2R_R       (*((volatile uint32_t *)0x40060500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTJ_AHB_DR4R_R       (*((volatile uint32_t *)0x40060504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTJ_AHB_DR8R_R       (*((volatile uint32_t *)0x40060508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTJ_AHB_ODR_R        (*((volatile uint32_t *)0x4006050C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTJ_AHB_PUR_R        (*((volatile uint32_t *)0x40060510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTJ_AHB_PDR_R        (*((volatile uint32_t *)0x40060514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTJ_AHB_SLR_R        (*((volatile uint32_t *)0x40060518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTJ_AHB_DEN_R        (*((volatile uint32_t *)0x4006051C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTJ_AHB_LOCK_R       (*((volatile uint32_t *)0x40060520))			/*	pp783	GPIO Lock */
#define GPIO_PORTJ_AHB_CR_R         (*((volatile uint32_t *)0x40060524))			/*	pp784	GPIO Commit */
#define GPIO_PORTJ_AHB_AMSEL_R      (*((volatile uint32_t *)0x40060528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTJ_AHB_PCTL_R       (*((volatile uint32_t *)0x4006052C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTJ_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40060530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTJ_AHB_DMACTL_R     (*((volatile uint32_t *)0x40060534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTJ_AHB_SI_R         (*((volatile uint32_t *)0x40060538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTJ_AHB_DR12R_R      (*((volatile uint32_t *)0x4006053C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTJ_AHB_PP_R         (*((volatile uint32_t *)0x40060FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTJ_AHB_PC_R         (*((volatile uint32_t *)0x40060FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port K (PortK)
#define GPIO_PORTK_DATA_R           (*((volatile uint32_t *)0x400613FC))			/*	pp759	GPIO Data */
#define GPIO_PORTK_DIR_R            (*((volatile uint32_t *)0x40061400))			/*	pp760	GPIO Direction */
#define GPIO_PORTK_IS_R             (*((volatile uint32_t *)0x40061404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTK_IBE_R            (*((volatile uint32_t *)0x40061408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTK_IEV_R            (*((volatile uint32_t *)0x4006140C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTK_IM_R             (*((volatile uint32_t *)0x40061410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTK_RIS_R            (*((volatile uint32_t *)0x40061414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTK_MIS_R            (*((volatile uint32_t *)0x40061418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTK_ICR_R            (*((volatile uint32_t *)0x4006141C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTK_AFSEL_R          (*((volatile uint32_t *)0x40061420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTK_DR2R_R           (*((volatile uint32_t *)0x40061500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTK_DR4R_R           (*((volatile uint32_t *)0x40061504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTK_DR8R_R           (*((volatile uint32_t *)0x40061508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTK_ODR_R            (*((volatile uint32_t *)0x4006150C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTK_PUR_R            (*((volatile uint32_t *)0x40061510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTK_PDR_R            (*((volatile uint32_t *)0x40061514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTK_SLR_R            (*((volatile uint32_t *)0x40061518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTK_DEN_R            (*((volatile uint32_t *)0x4006151C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTK_LOCK_R           (*((volatile uint32_t *)0x40061520))			/*	pp783	GPIO Lock */
#define GPIO_PORTK_CR_R             (*((volatile uint32_t *)0x40061524))			/*	pp784	GPIO Commit */
#define GPIO_PORTK_AMSEL_R          (*((volatile uint32_t *)0x40061528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTK_PCTL_R           (*((volatile uint32_t *)0x4006152C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTK_ADCCTL_R         (*((volatile uint32_t *)0x40061530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTK_DMACTL_R         (*((volatile uint32_t *)0x40061534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTK_SI_R             (*((volatile uint32_t *)0x40061538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTK_DR12R_R          (*((volatile uint32_t *)0x4006153C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTK_PP_R             (*((volatile uint32_t *)0x40061FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTK_PC_R             (*((volatile uint32_t *)0x40061FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port L (PortL)
#define GPIO_PORTL_DATA_R           (*((volatile uint32_t *)0x400623FC))			/*	pp759	GPIO Data */
#define GPIO_PORTL_DIR_R            (*((volatile uint32_t *)0x40062400))			/*	pp760	GPIO Direction */
#define GPIO_PORTL_IS_R             (*((volatile uint32_t *)0x40062404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTL_IBE_R            (*((volatile uint32_t *)0x40062408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTL_IEV_R            (*((volatile uint32_t *)0x4006240C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTL_IM_R             (*((volatile uint32_t *)0x40062410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTL_RIS_R            (*((volatile uint32_t *)0x40062414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTL_MIS_R            (*((volatile uint32_t *)0x40062418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTL_ICR_R            (*((volatile uint32_t *)0x4006241C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTL_AFSEL_R          (*((volatile uint32_t *)0x40062420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTL_DR2R_R           (*((volatile uint32_t *)0x40062500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTL_DR4R_R           (*((volatile uint32_t *)0x40062504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTL_DR8R_R           (*((volatile uint32_t *)0x40062508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTL_ODR_R            (*((volatile uint32_t *)0x4006250C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTL_PUR_R            (*((volatile uint32_t *)0x40062510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTL_PDR_R            (*((volatile uint32_t *)0x40062514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTL_SLR_R            (*((volatile uint32_t *)0x40062518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTL_DEN_R            (*((volatile uint32_t *)0x4006251C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTL_LOCK_R           (*((volatile uint32_t *)0x40062520))			/*	pp783	GPIO Lock */
#define GPIO_PORTL_CR_R             (*((volatile uint32_t *)0x40062524))			/*	pp784	GPIO Commit */
#define GPIO_PORTL_AMSEL_R          (*((volatile uint32_t *)0x40062528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTL_PCTL_R           (*((volatile uint32_t *)0x4006252C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTL_ADCCTL_R         (*((volatile uint32_t *)0x40062530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTL_DMACTL_R         (*((volatile uint32_t *)0x40062534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTL_SI_R             (*((volatile uint32_t *)0x40062538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTL_DR12R_R          (*((volatile uint32_t *)0x4006253C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTL_PP_R             (*((volatile uint32_t *)0x40062FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTL_PC_R             (*((volatile uint32_t *)0x40062FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port M (PortM)
#define GPIO_PORTM_DATA_R           (*((volatile uint32_t *)0x400633FC))			/*	pp759	GPIO Data */
#define GPIO_PORTM_DIR_R            (*((volatile uint32_t *)0x40063400))			/*	pp760	GPIO Direction */
#define GPIO_PORTM_IS_R             (*((volatile uint32_t *)0x40063404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTM_IBE_R            (*((volatile uint32_t *)0x40063408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTM_IEV_R            (*((volatile uint32_t *)0x4006340C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTM_IM_R             (*((volatile uint32_t *)0x40063410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTM_RIS_R            (*((volatile uint32_t *)0x40063414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTM_MIS_R            (*((volatile uint32_t *)0x40063418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTM_ICR_R            (*((volatile uint32_t *)0x4006341C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTM_AFSEL_R          (*((volatile uint32_t *)0x40063420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTM_DR2R_R           (*((volatile uint32_t *)0x40063500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTM_DR4R_R           (*((volatile uint32_t *)0x40063504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTM_DR8R_R           (*((volatile uint32_t *)0x40063508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTM_ODR_R            (*((volatile uint32_t *)0x4006350C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTM_PUR_R            (*((volatile uint32_t *)0x40063510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTM_PDR_R            (*((volatile uint32_t *)0x40063514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTM_SLR_R            (*((volatile uint32_t *)0x40063518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTM_DEN_R            (*((volatile uint32_t *)0x4006351C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTM_LOCK_R           (*((volatile uint32_t *)0x40063520))			/*	pp783	GPIO Lock */
#define GPIO_PORTM_CR_R             (*((volatile uint32_t *)0x40063524))			/*	pp784	GPIO Commit */
#define GPIO_PORTM_AMSEL_R          (*((volatile uint32_t *)0x40063528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTM_PCTL_R           (*((volatile uint32_t *)0x4006352C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTM_ADCCTL_R         (*((volatile uint32_t *)0x40063530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTM_DMACTL_R         (*((volatile uint32_t *)0x40063534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTM_SI_R             (*((volatile uint32_t *)0x40063538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTM_DR12R_R          (*((volatile uint32_t *)0x4006353C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTM_PP_R             (*((volatile uint32_t *)0x40063FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTM_PC_R             (*((volatile uint32_t *)0x40063FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port N (PortN)
#define GPIO_PORTN_DATA_R           (*((volatile uint32_t *)0x400643FC))			/*	pp759	GPIO Data */
#define GPIO_PORTN_DIR_R            (*((volatile uint32_t *)0x40064400))			/*	pp760	GPIO Direction */
#define GPIO_PORTN_IS_R             (*((volatile uint32_t *)0x40064404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTN_IBE_R            (*((volatile uint32_t *)0x40064408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTN_IEV_R            (*((volatile uint32_t *)0x4006440C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTN_IM_R             (*((volatile uint32_t *)0x40064410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTN_RIS_R            (*((volatile uint32_t *)0x40064414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTN_MIS_R            (*((volatile uint32_t *)0x40064418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTN_ICR_R            (*((volatile uint32_t *)0x4006441C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTN_AFSEL_R          (*((volatile uint32_t *)0x40064420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTN_DR2R_R           (*((volatile uint32_t *)0x40064500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTN_DR4R_R           (*((volatile uint32_t *)0x40064504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTN_DR8R_R           (*((volatile uint32_t *)0x40064508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTN_ODR_R            (*((volatile uint32_t *)0x4006450C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTN_PUR_R            (*((volatile uint32_t *)0x40064510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTN_PDR_R            (*((volatile uint32_t *)0x40064514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTN_SLR_R            (*((volatile uint32_t *)0x40064518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTN_DEN_R            (*((volatile uint32_t *)0x4006451C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTN_LOCK_R           (*((volatile uint32_t *)0x40064520))			/*	pp783	GPIO Lock */
#define GPIO_PORTN_CR_R             (*((volatile uint32_t *)0x40064524))			/*	pp784	GPIO Commit */
#define GPIO_PORTN_AMSEL_R          (*((volatile uint32_t *)0x40064528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTN_PCTL_R           (*((volatile uint32_t *)0x4006452C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTN_ADCCTL_R         (*((volatile uint32_t *)0x40064530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTN_DMACTL_R         (*((volatile uint32_t *)0x40064534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTN_SI_R             (*((volatile uint32_t *)0x40064538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTN_DR12R_R          (*((volatile uint32_t *)0x4006453C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTN_PP_R             (*((volatile uint32_t *)0x40064FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTN_PC_R             (*((volatile uint32_t *)0x40064FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port P (PortP)
#define GPIO_PORTP_DATA_R           (*((volatile uint32_t *)0x400653FC))			/*	pp759	GPIO Data */
#define GPIO_PORTP_DIR_R            (*((volatile uint32_t *)0x40065400))			/*	pp760	GPIO Direction */
#define GPIO_PORTP_IS_R             (*((volatile uint32_t *)0x40065404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTP_IBE_R            (*((volatile uint32_t *)0x40065408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTP_IEV_R            (*((volatile uint32_t *)0x4006540C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTP_IM_R             (*((volatile uint32_t *)0x40065410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTP_RIS_R            (*((volatile uint32_t *)0x40065414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTP_MIS_R            (*((volatile uint32_t *)0x40065418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTP_ICR_R            (*((volatile uint32_t *)0x4006541C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTP_AFSEL_R          (*((volatile uint32_t *)0x40065420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTP_DR2R_R           (*((volatile uint32_t *)0x40065500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTP_DR4R_R           (*((volatile uint32_t *)0x40065504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTP_DR8R_R           (*((volatile uint32_t *)0x40065508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTP_ODR_R            (*((volatile uint32_t *)0x4006550C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTP_PUR_R            (*((volatile uint32_t *)0x40065510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTP_PDR_R            (*((volatile uint32_t *)0x40065514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTP_SLR_R            (*((volatile uint32_t *)0x40065518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTP_DEN_R            (*((volatile uint32_t *)0x4006551C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTP_LOCK_R           (*((volatile uint32_t *)0x40065520))			/*	pp783	GPIO Lock */
#define GPIO_PORTP_CR_R             (*((volatile uint32_t *)0x40065524))			/*	pp784	GPIO Commit */
#define GPIO_PORTP_AMSEL_R          (*((volatile uint32_t *)0x40065528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTP_PCTL_R           (*((volatile uint32_t *)0x4006552C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTP_ADCCTL_R         (*((volatile uint32_t *)0x40065530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTP_DMACTL_R         (*((volatile uint32_t *)0x40065534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTP_SI_R             (*((volatile uint32_t *)0x40065538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTP_DR12R_R          (*((volatile uint32_t *)0x4006553C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTP_PP_R             (*((volatile uint32_t *)0x40065FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTP_PC_R             (*((volatile uint32_t *)0x40065FC4))			/*	pp800	GPIO Peripheral Configuration */
	// GPIO Port Q (PortQ)
#define GPIO_PORTQ_DATA_R           (*((volatile uint32_t *)0x400663FC))			/*	pp759	GPIO Data */
#define GPIO_PORTQ_DIR_R            (*((volatile uint32_t *)0x40066400))			/*	pp760	GPIO Direction */
#define GPIO_PORTQ_IS_R             (*((volatile uint32_t *)0x40066404))			/*	pp761	GPIO Interrupt Sense */
#define GPIO_PORTQ_IBE_R            (*((volatile uint32_t *)0x40066408))			/*	pp762	GPIO Interrupt Both Edges */
#define GPIO_PORTQ_IEV_R            (*((volatile uint32_t *)0x4006640C))			/*	pp763	GPIO Interrupt Event */
#define GPIO_PORTQ_IM_R             (*((volatile uint32_t *)0x40066410))			/*	pp764	GPIO Interrupt Mask */
#define GPIO_PORTQ_RIS_R            (*((volatile uint32_t *)0x40066414))			/*	pp765	GPIO Raw Interrupt Status */
#define GPIO_PORTQ_MIS_R            (*((volatile uint32_t *)0x40066418))			/*	pp767	GPIO Masked Interrupt Status */
#define GPIO_PORTQ_ICR_R            (*((volatile uint32_t *)0x4006641C))			/*	pp769	GPIO Interrupt Clear */
#define GPIO_PORTQ_AFSEL_R          (*((volatile uint32_t *)0x40066420))			/*	pp770	GPIO Alternate Function Select */
#define GPIO_PORTQ_DR2R_R           (*((volatile uint32_t *)0x40066500))			/*	pp772	GPIO 2-mA Drive Select */
#define GPIO_PORTQ_DR4R_R           (*((volatile uint32_t *)0x40066504))			/*	pp773	GPIO 4-mA Drive Select */
#define GPIO_PORTQ_DR8R_R           (*((volatile uint32_t *)0x40066508))			/*	pp774	GPIO 8-mA Drive Select */
#define GPIO_PORTQ_ODR_R            (*((volatile uint32_t *)0x4006650C))			/*	pp775	GPIO Open Drain Select */
#define GPIO_PORTQ_PUR_R            (*((volatile uint32_t *)0x40066510))			/*	pp776	GPIO Pull-Up Select */
#define GPIO_PORTQ_PDR_R            (*((volatile uint32_t *)0x40066514))			/*	pp778	GPIO Pull-Down Select */
#define GPIO_PORTQ_SLR_R            (*((volatile uint32_t *)0x40066518))			/*	pp780	GPIO Slew Rate Control Select */
#define GPIO_PORTQ_DEN_R            (*((volatile uint32_t *)0x4006651C))			/*	pp781	GPIO Digital Enable */
#define GPIO_PORTQ_LOCK_R           (*((volatile uint32_t *)0x40066520))			/*	pp783	GPIO Lock */
#define GPIO_PORTQ_CR_R             (*((volatile uint32_t *)0x40066524))			/*	pp784	GPIO Commit */
#define GPIO_PORTQ_AMSEL_R          (*((volatile uint32_t *)0x40066528))			/*	pp786	GPIO Analog Mode Select */
#define GPIO_PORTQ_PCTL_R           (*((volatile uint32_t *)0x4006652C))			/*	pp787	GPIO Port Control */
#define GPIO_PORTQ_ADCCTL_R         (*((volatile uint32_t *)0x40066530))			/*	pp789	GPIO ADC Control */
#define GPIO_PORTQ_DMACTL_R         (*((volatile uint32_t *)0x40066534))			/*	pp790	GPIO DMA Control */
#define GPIO_PORTQ_SI_R             (*((volatile uint32_t *)0x40066538))			/*	pp791	GPIO Select Interrupt */
#define GPIO_PORTQ_DR12R_R          (*((volatile uint32_t *)0x4006653C))			/*	pp792	GPIO 12-mA Drive Select */
#define GPIO_PORTQ_PP_R             (*((volatile uint32_t *)0x40066FC0))			/*	pp799	GPIO Peripheral Property */
#define GPIO_PORTQ_PC_R             (*((volatile uint32_t *)0x40066FC4))			/*	pp800	GPIO Peripheral Configuration */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
    // Bit fields for the GPIO pin
#define GPIO_PIN_7                  0x00000080                                      /*  GPIO pin 7 */
#define GPIO_PIN_6                  0x00000040                                      /*  GPIO pin 6 */
#define GPIO_PIN_5                  0x00000020                                      /*  GPIO pin 5 */
#define GPIO_PIN_4                  0x00000010                                      /*  GPIO pin 4 */
#define GPIO_PIN_3                  0x00000008                                      /*  GPIO pin 3 */
#define GPIO_PIN_2                  0x00000004                                      /*  GPIO pin 2 */
#define GPIO_PIN_1                  0x00000002                                      /*  GPIO pin 1 */
#define GPIO_PIN_0                  0x00000001                                      /*  GPIO pin 0 */

    // Bit fields in the GPIO_IM register                                               pp764
#define GPIO_IM_DMAIME              0x00000100                                      /*  GPIO uDMA Done Interrupt Mask Enable */

    // Bit fields in the GPIO_RIS register                                              pp765
#define GPIO_RIS_DMARIS             0x00000100                                      /*  GPIO uDMA Done Interrupt Raw Status */

    // Bit fields in the GPIO_MIS register                                              pp767
#define GPIO_MIS_DMAMIS             0x00000100                                      /*  GPIO uDMA Done Masked Interrupt Status */

    // Bit fields in the GPIO_ICR register                                              pp769
#define GPIO_ICR_DMAIC              0x00000100                                      /*  GPIO uDMA Interrupt Clear */

    // Bit fields in the GPIO_PCTL register                                             pp787
#define GPIO_PCTL_PMC7_M            0xF0000000                                      /*  Port Mux Control 7 Mask */
#define GPIO_PCTL_PMC6_M            0x0F000000                                      /*  Port Mux Control 6 Mask */
#define GPIO_PCTL_PMC5_M            0x00F00000                                      /*  Port Mux Control 5 Mask */
#define GPIO_PCTL_PMC4_M            0x000F0000                                      /*  Port Mux Control 4 Mask */
#define GPIO_PCTL_PMC3_M            0x0000F000                                      /*  Port Mux Control 3 Mask */
#define GPIO_PCTL_PMC2_M            0x00000F00                                      /*  Port Mux Control 2 Mask */
#define GPIO_PCTL_PMC1_M            0x000000F0                                      /*  Port Mux Control 1 Mask */
#define GPIO_PCTL_PMC0_M            0x0000000F                                      /*  Port Mux Control 0 Mask */
#define GPIO_PCTL_PMC7_S            28                                              /*  Port Mux Control 7 Shift */
#define GPIO_PCTL_PMC6_S            24                                              /*  Port Mux Control 6 Shift */
#define GPIO_PCTL_PMC5_S            20                                              /*  Port Mux Control 5 Shift */
#define GPIO_PCTL_PMC4_S            16                                              /*  Port Mux Control 4 Shift */
#define GPIO_PCTL_PMC3_S            12                                              /*  Port Mux Control 3 Shift */
#define GPIO_PCTL_PMC2_S            8                                               /*  Port Mux Control 2 Shift */
#define GPIO_PCTL_PMC1_S            4                                               /*  Port Mux Control 1 Shift */
#define GPIO_PCTL_PMC0_S            0                                               /*  Port Mux Control 0 Shift */

    // Bit fields in the GPIO_SI register                                               pp791
#define GPIO_SI_SUM                 0x00000001                                      /*  Summary Interrupt */

    // Bit fields in the GPIO_PP register                                               pp799
#define GPIO_PP_EDE                 0x00000001                                      /*  Extended Drive Enable */

    // Bit fields in the GPIO_PC register                                               pp800
#define GPIO_PC_EDM7_M              0x0000C000                                      /*  Extended Drive Mode Bit 7 Mask */
#define GPIO_PC_EDM6_M              0x00003000                                      /*  Extended Drive Mode Bit 6 Mask */
#define GPIO_PC_EDM5_M              0x00000C00                                      /*  Extended Drive Mode Bit 5 Mask */
#define GPIO_PC_EDM4_M              0x00000300                                      /*  Extended Drive Mode Bit 4 Mask */
#define GPIO_PC_EDM3_M              0x000000C0                                      /*  Extended Drive Mode Bit 3 Mask */
#define GPIO_PC_EDM2_M              0x00000030                                      /*  Extended Drive Mode Bit 2 Mask */
#define GPIO_PC_EDM1_M              0x0000000C                                      /*  Extended Drive Mode Bit 1 Mask */
#define GPIO_PC_EDM0_M              0x00000003                                      /*  Extended Drive Mode Bit 0 Mask */
#define GPIO_PC_EDM7_S              14                                              /*  Extended Drive Mode Bit 7 Shift */
#define GPIO_PC_EDM6_S              12                                              /*  Extended Drive Mode Bit 6 Shift */
#define GPIO_PC_EDM5_S              10                                              /*  Extended Drive Mode Bit 5 Shift */
#define GPIO_PC_EDM4_S              8                                               /*  Extended Drive Mode Bit 4 Shift */
#define GPIO_PC_EDM3_S              6                                               /*  Extended Drive Mode Bit 3 Shift */
#define GPIO_PC_EDM2_S              4                                               /*  Extended Drive Mode Bit 2 Shift */
#define GPIO_PC_EDM1_S              2                                               /*  Extended Drive Mode Bit 1 Shift */
#define GPIO_PC_EDM0_S              0                                               /*  Extended Drive Mode Bit 0 Shift */
