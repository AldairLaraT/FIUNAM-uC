/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apuntadores a registros
 */

/**
 * Analog-to-Digital Converter (ADC) registers											pp1073	Register map
 */
    // ADC module 0 (ADC0)
#define ADC0_ACTSS_R                (*((volatile uint32_t *)0x40038000))			/*	pp1077	ADC Active Sample Sequencer */
#define ADC0_RIS_R                  (*((volatile uint32_t *)0x40038004))			/*	pp1079	ADC Raw Interrupt Status */
#define ADC0_IM_R                   (*((volatile uint32_t *)0x40038008))			/*	pp1082	ADC Interrupt Mask */
#define ADC0_ISC_R                  (*((volatile uint32_t *)0x4003800C))			/*	pp1085	ADC Interrupt Status and Clear */
#define ADC0_OSTAT_R                (*((volatile uint32_t *)0x40038010))			/*	pp1089	ADC Overflow Status */
#define ADC0_EMUX_R                 (*((volatile uint32_t *)0x40038014))			/*	pp1091	ADC Event Multiplexer Select */
#define ADC0_USTAT_R                (*((volatile uint32_t *)0x40038018))			/*	pp1096	ADC Underflow Status */
#define ADC0_TSSEL_R                (*((volatile uint32_t *)0x4003801C))			/*	pp1097	ADC Trigger Source Select */
#define ADC0_SSPRI_R                (*((volatile uint32_t *)0x40038020))			/*	pp1099	ADC Sample Sequencer Priority */
#define ADC0_SPC_R                  (*((volatile uint32_t *)0x40038024))			/*	pp1101	ADC Sample Phase Control */
#define ADC0_PSSI_R                 (*((volatile uint32_t *)0x40038028))			/*	pp1103	ADC Processor Sample Sequence Initiate */
#define ADC0_SAC_R                  (*((volatile uint32_t *)0x40038030))			/*	pp1105	ADC Sample Averaging Control */
#define ADC0_DCISC_R                (*((volatile uint32_t *)0x40038034))			/*	pp1106	ADC Digital Comparator Interrupt Status and Clear */
#define ADC0_CTL_R                  (*((volatile uint32_t *)0x40038038))			/*	pp1108	ADC Control */
#define ADC0_SSMUX0_R               (*((volatile uint32_t *)0x40038040))			/*	pp1109	ADC Sample Sequence Input Multiplexer Select 0 */
#define ADC0_SSCTL0_R               (*((volatile uint32_t *)0x40038044))			/*	pp1111	ADC Sample Sequence Control 0 */
#define ADC0_SSFIFO0_R              (*((volatile uint32_t *)0x40038048))			/*	pp1118	ADC Sample Sequence Result FIFO 0 */
#define ADC0_SSFSTAT0_R             (*((volatile uint32_t *)0x4003804C))			/*	pp1119	ADC Sample Sequence FIFO 0 Status */
#define ADC0_SSOP0_R                (*((volatile uint32_t *)0x40038050))			/*	pp1121	ADC Sample Sequence 0 Operation */
#define ADC0_SSDC0_R                (*((volatile uint32_t *)0x40038054))			/*	pp1123	ADC Sample Sequence 0 Digital Comparator Select */
#define ADC0_SSEMUX0_R              (*((volatile uint32_t *)0x40038058))			/*	pp1125	ADC Sample Sequence Extended Input Multiplexer Select */
#define ADC0_SSTSH0_R               (*((volatile uint32_t *)0x4003805C))			/*	pp1127	ADC Sample Sequence 0 Sample and Hold Time */
#define ADC0_SSMUX1_R               (*((volatile uint32_t *)0x40038060))			/*	pp1129	ADC Sample Sequence Input Multiplexer Select 1 */
#define ADC0_SSCTL1_R               (*((volatile uint32_t *)0x40038064))			/*	pp1130	ADC Sample Sequence Control 1 */
#define ADC0_SSFIFO1_R              (*((volatile uint32_t *)0x40038068))			/*	pp1118	ADC Sample Sequence Result FIFO 1 */
#define ADC0_SSFSTAT1_R             (*((volatile uint32_t *)0x4003806C))			/*	pp1119	ADC Sample Sequence FIFO 1 Status */
#define ADC0_SSOP1_R                (*((volatile uint32_t *)0x40038070))			/*	pp1134	ADC Sample Sequence 1 Operation */
#define ADC0_SSDC1_R                (*((volatile uint32_t *)0x40038074))			/*	pp1135	ADC Sample Sequence 1 Digital Comparator Select */
#define ADC0_SSEMUX1_R              (*((volatile uint32_t *)0x40038078))			/*	pp1137	ADC Sample Sequence Extended Input Multiplexer Select 1 */
#define ADC0_SSTSH1_R               (*((volatile uint32_t *)0x4003807C))			/*	pp1139	ADC Sample Sequence 1 Sample and Hold Time */
#define ADC0_SSMUX2_R               (*((volatile uint32_t *)0x40038080))			/*	pp1129	ADC Sample Sequence Input Multiplexer Select 2 */
#define ADC0_SSCTL2_R               (*((volatile uint32_t *)0x40038084))			/*	pp1130	ADC Sample Sequence Control 2 */
#define ADC0_SSFIFO2_R              (*((volatile uint32_t *)0x40038088))			/*	pp1118	ADC Sample Sequence Result FIFO 2 */
#define ADC0_SSFSTAT2_R             (*((volatile uint32_t *)0x4003808C))			/*	pp1119	ADC Sample Sequence FIFO 2 Status */
#define ADC0_SSOP2_R                (*((volatile uint32_t *)0x40038090))			/*	pp1134	ADC Sample Sequence 2 Operation */
#define ADC0_SSDC2_R                (*((volatile uint32_t *)0x40038094))			/*	pp1135	ADC Sample Sequence 2 Digital Comparator Select */
#define ADC0_SSEMUX2_R              (*((volatile uint32_t *)0x40038098))			/*	pp1137	ADC Sample Sequence Extended Input Multiplexer Select 2 */
#define ADC0_SSTSH2_R               (*((volatile uint32_t *)0x4003809C))			/*	pp1139	ADC Sample Sequence 2 Sample and Hold Time */
#define ADC0_SSMUX3_R               (*((volatile uint32_t *)0x400380A0))			/*	pp1141	ADC Sample Sequence Input Multiplexer Select 3 */
#define ADC0_SSCTL3_R               (*((volatile uint32_t *)0x400380A4))			/*	pp1142	ADC Sample Sequence Control 3 */
#define ADC0_SSFIFO3_R              (*((volatile uint32_t *)0x400380A8))			/*	pp1118	ADC Sample Sequence Result FIFO 3 */
#define ADC0_SSFSTAT3_R             (*((volatile uint32_t *)0x400380AC))			/*	pp1119	ADC Sample Sequence FIFO 3 Status */
#define ADC0_SSOP3_R                (*((volatile uint32_t *)0x400380B0))			/*	pp1144	ADC Sample Sequence 3 Operation */
#define ADC0_SSDC3_R                (*((volatile uint32_t *)0x400380B4))			/*	pp1145	ADC Sample Sequence 3 Digital Comparator Select */
#define ADC0_SSEMUX3_R              (*((volatile uint32_t *)0x400380B8))			/*	pp1146	ADC Sample Sequence Extended Input Multiplexer Select */
#define ADC0_SSTSH3_R               (*((volatile uint32_t *)0x400380BC))			/*	pp1147	ADC Samples Sequence 3 Sample and Hold Time */
#define ADC0_DCRIC_R                (*((volatile uint32_t *)0x40038D00))			/*	pp1148	ADC Digital Comparator Reset Initial Conditions */
#define ADC0_DCCTL0_R               (*((volatile uint32_t *)0x40038E00))			/*	pp1153	ADC Digital Comparator Control 0 */
#define ADC0_DCCTL1_R               (*((volatile uint32_t *)0x40038E04))			/*	pp1153	ADC Digital Comparator Control 1 */
#define ADC0_DCCTL2_R               (*((volatile uint32_t *)0x40038E08))			/*	pp1153	ADC Digital Comparator Control 2 */
#define ADC0_DCCTL3_R               (*((volatile uint32_t *)0x40038E0C))			/*	pp1153	ADC Digital Comparator Control 3 */
#define ADC0_DCCTL4_R               (*((volatile uint32_t *)0x40038E10))			/*	pp1153	ADC Digital Comparator Control 4 */
#define ADC0_DCCTL5_R               (*((volatile uint32_t *)0x40038E14))			/*	pp1153	ADC Digital Comparator Control 5 */
#define ADC0_DCCTL6_R               (*((volatile uint32_t *)0x40038E18))			/*	pp1153	ADC Digital Comparator Control 6 */
#define ADC0_DCCTL7_R               (*((volatile uint32_t *)0x40038E1C))			/*	pp1153	ADC Digital Comparator Control 7 */
#define ADC0_DCCMP0_R               (*((volatile uint32_t *)0x40038E40))			/*	pp1156	ADC Digital Comparator Range 0 */
#define ADC0_DCCMP1_R               (*((volatile uint32_t *)0x40038E44))			/*	pp1156	ADC Digital Comparator Range 1 */
#define ADC0_DCCMP2_R               (*((volatile uint32_t *)0x40038E48))			/*	pp1156	ADC Digital Comparator Range 2 */
#define ADC0_DCCMP3_R               (*((volatile uint32_t *)0x40038E4C))			/*	pp1156	ADC Digital Comparator Range 3 */
#define ADC0_DCCMP4_R               (*((volatile uint32_t *)0x40038E50))			/*	pp1156	ADC Digital Comparator Range 4 */
#define ADC0_DCCMP5_R               (*((volatile uint32_t *)0x40038E54))			/*	pp1156	ADC Digital Comparator Range 5 */
#define ADC0_DCCMP6_R               (*((volatile uint32_t *)0x40038E58))			/*	pp1156	ADC Digital Comparator Range 6 */
#define ADC0_DCCMP7_R               (*((volatile uint32_t *)0x40038E5C))			/*	pp1156	ADC Digital Comparator Range 7 */
#define ADC0_PP_R                   (*((volatile uint32_t *)0x40038FC0))			/*	pp1157	ADC Peripheral Properties */
#define ADC0_PC_R                   (*((volatile uint32_t *)0x40038FC4))			/*	pp1159	ADC Peripheral Configuration */
#define ADC0_CC_R                   (*((volatile uint32_t *)0x40038FC8))			/*	pp1160	ADC Clock Configuration */
    // ADC module 1 (ADC1)
#define ADC1_ACTSS_R                (*((volatile uint32_t *)0x40039000))			/*	pp1077	ADC Active Sample Sequencer */
#define ADC1_RIS_R                  (*((volatile uint32_t *)0x40039004))			/*	pp1079	ADC Raw Interrupt Status */
#define ADC1_IM_R                   (*((volatile uint32_t *)0x40039008))			/*	pp1082	ADC Interrupt Mask */
#define ADC1_ISC_R                  (*((volatile uint32_t *)0x4003900C))			/*	pp1085	ADC Interrupt Status and Clear */
#define ADC1_OSTAT_R                (*((volatile uint32_t *)0x40039010))			/*	pp1089	ADC Overflow Status */
#define ADC1_EMUX_R                 (*((volatile uint32_t *)0x40039014))			/*	pp1091	ADC Event Multiplexer Select */
#define ADC1_USTAT_R                (*((volatile uint32_t *)0x40039018))			/*	pp1096	ADC Underflow Status */
#define ADC1_TSSEL_R                (*((volatile uint32_t *)0x4003901C))			/*	pp1097	ADC Trigger Source Select */
#define ADC1_SSPRI_R                (*((volatile uint32_t *)0x40039020))			/*	pp1099	ADC Sample Sequencer Priority */
#define ADC1_SPC_R                  (*((volatile uint32_t *)0x40039024))			/*	pp1101	ADC Sample Phase Control */
#define ADC1_PSSI_R                 (*((volatile uint32_t *)0x40039028))			/*	pp1103	ADC Processor Sample Sequence Initiate */
#define ADC1_SAC_R                  (*((volatile uint32_t *)0x40039030))			/*	pp1105	ADC Sample Averaging Control */
#define ADC1_DCISC_R                (*((volatile uint32_t *)0x40039034))			/*	pp1106	ADC Digital Comparator Interrupt Status and Clear */
#define ADC1_CTL_R                  (*((volatile uint32_t *)0x40039038))			/*	pp1108	ADC Control */
#define ADC1_SSMUX0_R               (*((volatile uint32_t *)0x40039040))			/*	pp1109	ADC Sample Sequence Input Multiplexer Select 0 */
#define ADC1_SSCTL0_R               (*((volatile uint32_t *)0x40039044))			/*	pp1111	ADC Sample Sequence Control 0 */
#define ADC1_SSFIFO0_R              (*((volatile uint32_t *)0x40039048))			/*	pp1118	ADC Sample Sequence Result FIFO 0 */
#define ADC1_SSFSTAT0_R             (*((volatile uint32_t *)0x4003904C))			/*	pp1119	ADC Sample Sequence FIFO 0 Status */
#define ADC1_SSOP0_R                (*((volatile uint32_t *)0x40039050))			/*	pp1121	ADC Sample Sequence 0 Operation */
#define ADC1_SSDC0_R                (*((volatile uint32_t *)0x40039054))			/*	pp1123	ADC Sample Sequence 0 Digital Comparator Select */
#define ADC1_SSEMUX0_R              (*((volatile uint32_t *)0x40039058))			/*	pp1125	ADC Sample Sequence Extended Input Multiplexer Select */
#define ADC1_SSTSH0_R               (*((volatile uint32_t *)0x4003905C))			/*	pp1127	ADC Sample Sequence 0 Sample and Hold Time */
#define ADC1_SSMUX1_R               (*((volatile uint32_t *)0x40039060))			/*	pp1129	ADC Sample Sequence Input Multiplexer Select 1 */
#define ADC1_SSCTL1_R               (*((volatile uint32_t *)0x40039064))			/*	pp1130	ADC Sample Sequence Control 1 */
#define ADC1_SSFIFO1_R              (*((volatile uint32_t *)0x40039068))			/*	pp1118	ADC Sample Sequence Result FIFO 1 */
#define ADC1_SSFSTAT1_R             (*((volatile uint32_t *)0x4003906C))			/*	pp1119	ADC Sample Sequence FIFO 1 Status */
#define ADC1_SSOP1_R                (*((volatile uint32_t *)0x40039070))			/*	pp1134	ADC Sample Sequence 1 Operation */
#define ADC1_SSDC1_R                (*((volatile uint32_t *)0x40039074))			/*	pp1135	ADC Sample Sequence 1 Digital Comparator Select */
#define ADC1_SSEMUX1_R              (*((volatile uint32_t *)0x40039078))			/*	pp1137	ADC Sample Sequence Extended Input Multiplexer Select 1 */
#define ADC1_SSTSH1_R               (*((volatile uint32_t *)0x4003907C))			/*	pp1139	ADC Sample Sequence 1 Sample and Hold Time */
#define ADC1_SSMUX2_R               (*((volatile uint32_t *)0x40039080))			/*	pp1129	ADC Sample Sequence Input Multiplexer Select 2 */
#define ADC1_SSCTL2_R               (*((volatile uint32_t *)0x40039084))			/*	pp1130	ADC Sample Sequence Control 2 */
#define ADC1_SSFIFO2_R              (*((volatile uint32_t *)0x40039088))			/*	pp1118	ADC Sample Sequence Result FIFO 2 */
#define ADC1_SSFSTAT2_R             (*((volatile uint32_t *)0x4003908C))			/*	pp1119	ADC Sample Sequence FIFO 2 Status */
#define ADC1_SSOP2_R                (*((volatile uint32_t *)0x40039090))			/*	pp1134	ADC Sample Sequence 2 Operation */
#define ADC1_SSDC2_R                (*((volatile uint32_t *)0x40039094))			/*	pp1135	ADC Sample Sequence 2 Digital Comparator Select */
#define ADC1_SSEMUX2_R              (*((volatile uint32_t *)0x40039098))			/*	pp1137	ADC Sample Sequence Extended Input Multiplexer Select 2 */
#define ADC1_SSTSH2_R               (*((volatile uint32_t *)0x4003909C))			/*	pp1139	ADC Sample Sequence 2 Sample and Hold Time */
#define ADC1_SSMUX3_R               (*((volatile uint32_t *)0x400390A0))			/*	pp1141	ADC Sample Sequence Input Multiplexer Select 3 */
#define ADC1_SSCTL3_R               (*((volatile uint32_t *)0x400390A4))			/*	pp1142	ADC Sample Sequence Control 3 */
#define ADC1_SSFIFO3_R              (*((volatile uint32_t *)0x400390A8))			/*	pp1118	ADC Sample Sequence Result FIFO 3 */
#define ADC1_SSFSTAT3_R             (*((volatile uint32_t *)0x400390AC))			/*	pp1119	ADC Sample Sequence FIFO 3 Status */
#define ADC1_SSOP3_R                (*((volatile uint32_t *)0x400390B0))			/*	pp1144	ADC Sample Sequence 3 Operation */
#define ADC1_SSDC3_R                (*((volatile uint32_t *)0x400390B4))			/*	pp1145	ADC Sample Sequence 3 Digital Comparator Select */
#define ADC1_SSEMUX3_R              (*((volatile uint32_t *)0x400390B8))			/*	pp1146	ADC Sample Sequence Extended Input Multiplexer Select */
#define ADC1_SSTSH3_R               (*((volatile uint32_t *)0x400390BC))			/*	pp1147	ADC Samples Sequence 3 Sample and Hold Time */
#define ADC1_DCRIC_R                (*((volatile uint32_t *)0x40039D00))			/*	pp1148	ADC Digital Comparator Reset Initial Conditions */
#define ADC1_DCCTL0_R               (*((volatile uint32_t *)0x40039E00))			/*	pp1153	ADC Digital Comparator Control 0 */
#define ADC1_DCCTL1_R               (*((volatile uint32_t *)0x40039E04))			/*	pp1153	ADC Digital Comparator Control 1 */
#define ADC1_DCCTL2_R               (*((volatile uint32_t *)0x40039E08))			/*	pp1153	ADC Digital Comparator Control 2 */
#define ADC1_DCCTL3_R               (*((volatile uint32_t *)0x40039E0C))			/*	pp1153	ADC Digital Comparator Control 3 */
#define ADC1_DCCTL4_R               (*((volatile uint32_t *)0x40039E10))			/*	pp1153	ADC Digital Comparator Control 4 */
#define ADC1_DCCTL5_R               (*((volatile uint32_t *)0x40039E14))			/*	pp1153	ADC Digital Comparator Control 5 */
#define ADC1_DCCTL6_R               (*((volatile uint32_t *)0x40039E18))			/*	pp1153	ADC Digital Comparator Control 6 */
#define ADC1_DCCTL7_R               (*((volatile uint32_t *)0x40039E1C))			/*	pp1153	ADC Digital Comparator Control 7 */
#define ADC1_DCCMP0_R               (*((volatile uint32_t *)0x40039E40))			/*	pp1156	ADC Digital Comparator Range 0 */
#define ADC1_DCCMP1_R               (*((volatile uint32_t *)0x40039E44))			/*	pp1156	ADC Digital Comparator Range 1 */
#define ADC1_DCCMP2_R               (*((volatile uint32_t *)0x40039E48))			/*	pp1156	ADC Digital Comparator Range 2 */
#define ADC1_DCCMP3_R               (*((volatile uint32_t *)0x40039E4C))			/*	pp1156	ADC Digital Comparator Range 3 */
#define ADC1_DCCMP4_R               (*((volatile uint32_t *)0x40039E50))			/*	pp1156	ADC Digital Comparator Range 4 */
#define ADC1_DCCMP5_R               (*((volatile uint32_t *)0x40039E54))			/*	pp1156	ADC Digital Comparator Range 5 */
#define ADC1_DCCMP6_R               (*((volatile uint32_t *)0x40039E58))			/*	pp1156	ADC Digital Comparator Range 6 */
#define ADC1_DCCMP7_R               (*((volatile uint32_t *)0x40039E5C))			/*	pp1156	ADC Digital Comparator Range 7 */
#define ADC1_PP_R                   (*((volatile uint32_t *)0x40039FC0))			/*	pp1157	ADC Peripheral Properties */
#define ADC1_PC_R                   (*((volatile uint32_t *)0x40039FC4))			/*	pp1159	ADC Peripheral Configuration */
#define ADC1_CC_R                   (*((volatile uint32_t *)0x40039FC8))			/*	pp1160	ADC Clock Configuration */ 

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
    // Bit fields in the ADC_ACTSS register                                             pp1077
#define ADC_ACTSS_BUSY              0x00010000                                      /*  ADC Busy */
#define ADC_ACTSS_ADEN3             0x00000800                                      /*  ADC SS3 DMA Enable */
#define ADC_ACTSS_ADEN2             0x00000400                                      /*  ADC SS2 DMA Enable */
#define ADC_ACTSS_ADEN1             0x00000200                                      /*  ADC SS1 DMA Enable */
#define ADC_ACTSS_ADEN0             0x00000100                                      /*  ADC SS1 DMA Enable */
#define ADC_ACTSS_ASEN3             0x00000008                                      /*  ADC SS3 Enable */
#define ADC_ACTSS_ASEN2             0x00000004                                      /*  ADC SS2 Enable */
#define ADC_ACTSS_ASEN1             0x00000002                                      /*  ADC SS1 Enable */
#define ADC_ACTSS_ASEN0             0x00000001                                      /*  ADC SS0 Enable */

    // Bit fields in the ADC_RIS register                                               pp1079
#define ADC_RIS_INRDC               0x00010000                                      /*  Digital Comparator Raw Interrupt Status */
#define ADC_RIS_DMAINR3             0x00000800                                      /*  SS3 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR2             0x00000400                                      /*  SS2 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR1             0x00000200                                      /*  SS1 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR0             0x00000100                                      /*  SS0 DMA Raw Interrupt Status */
#define ADC_RIS_INR3                0x00000008                                      /*  SS3 Raw Interrupt Status */
#define ADC_RIS_INR2                0x00000004                                      /*  SS2 Raw Interrupt Status */
#define ADC_RIS_INR1                0x00000002                                      /*  SS1 Raw Interrupt Status */
#define ADC_RIS_INR0                0x00000001                                      /*  SS0 Raw Interrupt Status */

    // Bit fields in the ADC_IM register                                                pp1082
#define ADC_IM_DCONSS3              0x00080000                                      /*  Digital Comparator Interrupt on SS3 */
#define ADC_IM_DCONSS2              0x00040000                                      /*  Digital Comparator Interrupt on SS2 */
#define ADC_IM_DCONSS1              0x00020000                                      /*  Digital Comparator Interrupt on SS1 */
#define ADC_IM_DCONSS0              0x00010000                                      /*  Digital Comparator Interrupt on SS0 */
#define ADC_IM_DMAMASK3             0x00000800                                      /*  SS3 DMA Interrupt Mask */
#define ADC_IM_DMAMASK2             0x00000400                                      /*  SS2 DMA Interrupt Mask */
#define ADC_IM_DMAMASK1             0x00000200                                      /*  SS1 DMA Interrupt Mask */
#define ADC_IM_DMAMASK0             0x00000100                                      /*  SS0 DMA Interrupt Mask */
#define ADC_IM_MASK3                0x00000008                                      /*  SS3 Interrupt Mask */
#define ADC_IM_MASK2                0x00000004                                      /*  SS2 Interrupt Mask */
#define ADC_IM_MASK1                0x00000002                                      /*  SS1 Interrupt Mask */
#define ADC_IM_MASK0                0x00000001                                      /*  SS0 Interrupt Mask */

    // Bit fields in the ADC_ISC register                                               pp1085
#define ADC_ISC_DCINSS3             0x00080000                                      /*  Digital Comparator Interrupt Status on SS3 */
#define ADC_ISC_DCINSS2             0x00040000                                      /*  Digital Comparator Interrupt Status on SS2 */
#define ADC_ISC_DCINSS1             0x00020000                                      /*  Digital Comparator Interrupt Status on SS1 */
#define ADC_ISC_DCINSS0             0x00010000                                      /*  Digital Comparator Interrupt Status on SS0 */
#define ADC_ISC_DMAIN3              0x00000800                                      /*  SS3 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN2              0x00000400                                      /*  SS2 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN1              0x00000200                                      /*  SS1 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN0              0x00000100                                      /*  SS0 DMA Interrupt Status and Clear */
#define ADC_ISC_IN3                 0x00000008                                      /*  SS3 Interrupt Status and Clear */
#define ADC_ISC_IN2                 0x00000004                                      /*  SS2 Interrupt Status and Clear */
#define ADC_ISC_IN1                 0x00000002                                      /*  SS1 Interrupt Status and Clear */
#define ADC_ISC_IN0                 0x00000001                                      /*  SS0 Interrupt Status and Clear */

    // Bit fields in the ADC_OSTAT register                                             pp1089
#define ADC_OSTAT_OV3               0x00000008                                      /*  SS3 FIFO Overflow */
#define ADC_OSTAT_OV2               0x00000004                                      /*  SS2 FIFO Overflow */
#define ADC_OSTAT_OV1               0x00000002                                      /*  SS1 FIFO Overflow */
#define ADC_OSTAT_OV0               0x00000001                                      /*  SS0 FIFO Overflow */

    // Bit fields in the ADC_EMUX register                                              pp1091
#define ADC_EMUX_EM3_M              0x0000F000                                      /*  SS3 Trigger Select Mask */
#define ADC_EMUX_EM3_PROCESSOR      0x00000000                                      /*  Processor (default) */
#define ADC_EMUX_EM3_COMP0          0x00001000                                      /*  Analog Comparator 0 */
#define ADC_EMUX_EM3_COMP1          0x00002000                                      /*  Analog Comparator 1 */
#define ADC_EMUX_EM3_COMP2          0x00003000                                      /*  Analog Comparator 2 */
#define ADC_EMUX_EM3_EXTERNAL       0x00004000                                      /*  External (GPIO Pins) */
#define ADC_EMUX_EM3_TIMER          0x00005000                                      /*  Timer */
#define ADC_EMUX_EM3_PWM0           0x00006000                                      /*  PWM generator 0 */
#define ADC_EMUX_EM3_PWM1           0x00007000                                      /*  PWM generator 1 */
#define ADC_EMUX_EM3_PWM2           0x00008000                                      /*  PWM generator 2 */
#define ADC_EMUX_EM3_PWM3           0x00009000                                      /*  PWM generator 3 */
#define ADC_EMUX_EM3_NEVER          0x0000E000                                      /*  Never Trigger */
#define ADC_EMUX_EM3_ALWAYS         0x0000F000                                      /*  Always (continuously sample) */
#define ADC_EMUX_EM2_M              0x00000F00                                      /*  SS2 Trigger Select Mask */
#define ADC_EMUX_EM2_PROCESSOR      0x00000000                                      /*  Processor (default) */
#define ADC_EMUX_EM2_COMP0          0x00000100                                      /*  Analog Comparator 0 */
#define ADC_EMUX_EM2_COMP1          0x00000200                                      /*  Analog Comparator 1 */
#define ADC_EMUX_EM2_COMP2          0x00000300                                      /*  Analog Comparator 2 */
#define ADC_EMUX_EM2_EXTERNAL       0x00000400                                      /*  External (GPIO Pins) */
#define ADC_EMUX_EM2_TIMER          0x00000500                                      /*  Timer */
#define ADC_EMUX_EM2_PWM0           0x00000600                                      /*  PWM generator 0 */
#define ADC_EMUX_EM2_PWM1           0x00000700                                      /*  PWM generator 1 */
#define ADC_EMUX_EM2_PWM2           0x00000800                                      /*  PWM generator 2 */
#define ADC_EMUX_EM2_PWM3           0x00000900                                      /*  PWM generator 3 */
#define ADC_EMUX_EM2_NEVER          0x00000E00                                      /*  Never Trigger */
#define ADC_EMUX_EM2_ALWAYS         0x00000F00                                      /*  Always (continuously sample) */
#define ADC_EMUX_EM1_M              0x000000F0                                      /*  SS1 Trigger Select Mask */
#define ADC_EMUX_EM1_PROCESSOR      0x00000000                                      /*  Processor (default) */
#define ADC_EMUX_EM1_COMP0          0x00000010                                      /*  Analog Comparator 0 */
#define ADC_EMUX_EM1_COMP1          0x00000020                                      /*  Analog Comparator 1 */
#define ADC_EMUX_EM1_COMP2          0x00000030                                      /*  Analog Comparator 2 */
#define ADC_EMUX_EM1_EXTERNAL       0x00000040                                      /*  External (GPIO Pins) */
#define ADC_EMUX_EM1_TIMER          0x00000050                                      /*  Timer */
#define ADC_EMUX_EM1_PWM0           0x00000060                                      /*  PWM generator 0 */
#define ADC_EMUX_EM1_PWM1           0x00000070                                      /*  PWM generator 1 */
#define ADC_EMUX_EM1_PWM2           0x00000080                                      /*  PWM generator 2 */
#define ADC_EMUX_EM1_PWM3           0x00000090                                      /*  PWM generator 3 */
#define ADC_EMUX_EM1_NEVER          0x000000E0                                      /*  Never Trigger */
#define ADC_EMUX_EM1_ALWAYS         0x000000F0                                      /*  Always (continuously sample) */
#define ADC_EMUX_EM0_M              0x0000000F                                      /*  SS0 Trigger Select Mask */
#define ADC_EMUX_EM0_PROCESSOR      0x00000000                                      /*  Processor (default) */
#define ADC_EMUX_EM0_COMP0          0x00000001                                      /*  Analog Comparator 0 */
#define ADC_EMUX_EM0_COMP1          0x00000002                                      /*  Analog Comparator 1 */
#define ADC_EMUX_EM0_COMP2          0x00000003                                      /*  Analog Comparator 2 */
#define ADC_EMUX_EM0_EXTERNAL       0x00000004                                      /*  External (GPIO Pins) */
#define ADC_EMUX_EM0_TIMER          0x00000005                                      /*  Timer */
#define ADC_EMUX_EM0_PWM0           0x00000006                                      /*  PWM generator 0 */
#define ADC_EMUX_EM0_PWM1           0x00000007                                      /*  PWM generator 1 */
#define ADC_EMUX_EM0_PWM2           0x00000008                                      /*  PWM generator 2 */
#define ADC_EMUX_EM0_PWM3           0x00000009                                      /*  PWM generator 3 */
#define ADC_EMUX_EM0_NEVER          0x0000000E                                      /*  Never Trigger */
#define ADC_EMUX_EM0_ALWAYS         0x0000000F                                      /*  Always (continuously sample) */

    // Bit fields in the ADC_USTAT register                                             pp1096
#define ADC_USTAT_UV3               0x00000008                                      /*  SS3 FIFO Underflow */
#define ADC_USTAT_UV2               0x00000004                                      /*  SS2 FIFO Underflow */
#define ADC_USTAT_UV1               0x00000002                                      /*  SS1 FIFO Underflow */
#define ADC_USTAT_UV0               0x00000001                                      /*  SS0 FIFO Underflow */

    // Bit fields in the ADC_TSSEL register                                             pp1097
#define ADC_TSSEL_PS3_M             0x30000000                                      /*  Generator 3 PWM Module Trigger Select Mask */
#define ADC_TSSEL_PS3_0             0x00000000                                      /*  Use Generator 3 (and its trigger) in PWM module 0 */
#define ADC_TSSEL_PS2_M             0x00300000                                      /*  Generator 2 PWM Module Trigger Select Mask */
#define ADC_TSSEL_PS2_0             0x00000000                                      /*  Use Generator 2 (and its trigger) in PWM module 0 */
#define ADC_TSSEL_PS1_M             0x00003000                                      /*  Generator 1 PWM Module Trigger Select Mask */
#define ADC_TSSEL_PS1_0             0x00000000                                      /*  Use Generator 1 (and its trigger) in PWM module 0 */
#define ADC_TSSEL_PS0_M             0x00000030                                      /*  Generator 0 PWM Module Trigger Select Mask */
#define ADC_TSSEL_PS0_0             0x00000000                                      /*  Use Generator 0 (and its trigger) in PWM module 0 */

    // Bit fields in the ADC_SSPRI register                                             pp1099
#define ADC_SSPRI_SS3_M             0x00003000                                      /*  SS3 Priority Mask */
#define ADC_SSPRI_SS2_M             0x00000300                                      /*  SS2 Priority Mask */
#define ADC_SSPRI_SS1_M             0x00000030                                      /*  SS1 Priority Mask */
#define ADC_SSPRI_SS0_M             0x00000003                                      /*  SS0 Priority Mask */

    // Bit fields in the ADC_SPC register                                               pp1101
#define ADC_SPC_PHASE_M             0x0000000F                                      /*  Phase Difference Mask */
#define ADC_SPC_PHASE_0             0x00000000                                      /*  ADC sample lags by 0.0 */
#define ADC_SPC_PHASE_22_5          0x00000001                                      /*  ADC sample lags by 22.5 */
#define ADC_SPC_PHASE_45            0x00000002                                      /*  ADC sample lags by 45.0 */
#define ADC_SPC_PHASE_67_5          0x00000003                                      /*  ADC sample lags by 67.5 */
#define ADC_SPC_PHASE_90            0x00000004                                      /*  ADC sample lags by 90.0 */
#define ADC_SPC_PHASE_112_5         0x00000005                                      /*  ADC sample lags by 112.5 */
#define ADC_SPC_PHASE_135           0x00000006                                      /*  ADC sample lags by 135.0 */
#define ADC_SPC_PHASE_157_5         0x00000007                                      /*  ADC sample lags by 157.5 */
#define ADC_SPC_PHASE_180           0x00000008                                      /*  ADC sample lags by 180.0 */
#define ADC_SPC_PHASE_202_5         0x00000009                                      /*  ADC sample lags by 202.5 */
#define ADC_SPC_PHASE_225           0x0000000A                                      /*  ADC sample lags by 225.0 */
#define ADC_SPC_PHASE_247_5         0x0000000B                                      /*  ADC sample lags by 247.5 */
#define ADC_SPC_PHASE_270           0x0000000C                                      /*  ADC sample lags by 270.0 */
#define ADC_SPC_PHASE_292_5         0x0000000D                                      /*  ADC sample lags by 292.5 */
#define ADC_SPC_PHASE_315           0x0000000E                                      /*  ADC sample lags by 315.0 */
#define ADC_SPC_PHASE_337_5         0x0000000F                                      /*  ADC sample lags by 337.5 */

    // Bit fields in the ADC_PSSI register                                              pp1103
#define ADC_PSSI_GSYNC              0x80000000                                      /*  Global Synchronize */
#define ADC_PSSI_SYNCWAIT           0x08000000                                      /*  Synchronize Wait */
#define ADC_PSSI_SS3                0x00000008                                      /*  SS3 Initiate */
#define ADC_PSSI_SS2                0x00000004                                      /*  SS2 Initiate */
#define ADC_PSSI_SS1                0x00000002                                      /*  SS1 Initiate */
#define ADC_PSSI_SS0                0x00000001                                      /*  SS0 Initiate */

    // Bit fields in the ADC_SAC register                                               pp1105
#define ADC_SAC_AVG_M               0x00000007                                      /*  Hardware Averaging Control Mask */
#define ADC_SAC_AVG_OFF             0x00000000                                      /*  No hardware oversampling */
#define ADC_SAC_AVG_2X              0x00000001                                      /*  2x hardware oversampling */
#define ADC_SAC_AVG_4X              0x00000002                                      /*  4x hardware oversampling */
#define ADC_SAC_AVG_8X              0x00000003                                      /*  8x hardware oversampling */
#define ADC_SAC_AVG_16X             0x00000004                                      /*  16x hardware oversampling */
#define ADC_SAC_AVG_32X             0x00000005                                      /*  32x hardware oversampling */
#define ADC_SAC_AVG_64X             0x00000006                                      /*  64x hardware oversampling */

    // Bit fields in the ADC_DCISC register                                             pp1106
#define ADC_DCISC_DCINT7            0x00000080                                      /*  Digital Comparator 7 Interrupt Status and Clear */
#define ADC_DCISC_DCINT6            0x00000040                                      /*  Digital Comparator 6 Interrupt Status and Clear */
#define ADC_DCISC_DCINT5            0x00000020                                      /*  Digital Comparator 5 Interrupt Status and Clear */
#define ADC_DCISC_DCINT4            0x00000010                                      /*  Digital Comparator 4 Interrupt Status and Clear */
#define ADC_DCISC_DCINT3            0x00000008                                      /*  Digital Comparator 3 Interrupt Status and Clear */
#define ADC_DCISC_DCINT2            0x00000004                                      /*  Digital Comparator 2 Interrupt Status and Clear */
#define ADC_DCISC_DCINT1            0x00000002                                      /*  Digital Comparator 1 Interrupt Status and Clear */
#define ADC_DCISC_DCINT0            0x00000001                                      /*  Digital Comparator 0 Interrupt Status and Clear */

    // Bit fields in the ADC_CTL register                                               pp1108
#define ADC_CTL_VREF_M              0x00000001                                      /*  Voltage Reference Select Mask */
#define ADC_CTL_VREF_INTERNAL       0x00000000                                      /*  VDDA and GNDA are the voltage references */
#define ADC_CTL_VREF_EXT_3V         0x00000001                                      /*  The external VREFA+ and VREFA- inputs are the voltage references */

    // Bit fields in the ADC_SSMUX0 register                                            pp1109
#define ADC_SSMUX0_MUX7_M           0xF0000000                                      /*  8th Sample Input Select Mask */
#define ADC_SSMUX0_MUX6_M           0x0F000000                                      /*  7th Sample Input Select Mask */
#define ADC_SSMUX0_MUX5_M           0x00F00000                                      /*  6th Sample Input Select Mask */
#define ADC_SSMUX0_MUX4_M           0x000F0000                                      /*  5th Sample Input Select Mask */
#define ADC_SSMUX0_MUX3_M           0x0000F000                                      /*  4th Sample Input Select Mask */
#define ADC_SSMUX0_MUX2_M           0x00000F00                                      /*  3rd Sample Input Select Mask */
#define ADC_SSMUX0_MUX1_M           0x000000F0                                      /*  2nd Sample Input Select Mask */
#define ADC_SSMUX0_MUX0_M           0x0000000F                                      /*  1st Sample Input Select Mask */
#define ADC_SSMUX0_MUX7_S           28                                              /*  8th Sample Input Select Shift */
#define ADC_SSMUX0_MUX6_S           24                                              /*  7th Sample Input Select Shift */
#define ADC_SSMUX0_MUX5_S           20                                              /*  6th Sample Input Select Shift */
#define ADC_SSMUX0_MUX4_S           16                                              /*  5th Sample Input Select Shift */
#define ADC_SSMUX0_MUX3_S           12                                              /*  4th Sample Input Select Shift */
#define ADC_SSMUX0_MUX2_S           8                                               /*  3rd Sample Input Select Shift */
#define ADC_SSMUX0_MUX1_S           4                                               /*  2nd Sample Input Select Shift */
#define ADC_SSMUX0_MUX0_S           0                                               /*  1st Sample Input Select Shift */

    // Bit fields in the ADC_SSCTL0 register                                            pp1111
#define ADC_SSCTL0_TS7              0x80000000                                      /*  8th Sample Temp Sensor Select */
#define ADC_SSCTL0_IE7              0x40000000                                      /*  8th Sample Interrupt Enable */
#define ADC_SSCTL0_END7             0x20000000                                      /*  8th Sample is End of Sequence */
#define ADC_SSCTL0_D7               0x10000000                                      /*  8th Sample Differential Input Select */
#define ADC_SSCTL0_TS6              0x08000000                                      /*  7th Sample Temp Sensor Select */
#define ADC_SSCTL0_IE6              0x04000000                                      /*  7th Sample Interrupt Enable */
#define ADC_SSCTL0_END6             0x02000000                                      /*  7th Sample is End of Sequence */
#define ADC_SSCTL0_D6               0x01000000                                      /*  7th Sample Differential Input Select */
#define ADC_SSCTL0_TS5              0x00800000                                      /*  6th Sample Temp Sensor Select */
#define ADC_SSCTL0_IE5              0x00400000                                      /*  6th Sample Interrupt Enable */
#define ADC_SSCTL0_END5             0x00200000                                      /*  6th Sample is End of Sequence */
#define ADC_SSCTL0_D5               0x00100000                                      /*  6th Sample Differential Input Select */
#define ADC_SSCTL0_TS4              0x00080000                                      /*  5th Sample Temp Sensor Select */
#define ADC_SSCTL0_IE4              0x00040000                                      /*  5th Sample Interrupt Enable */
#define ADC_SSCTL0_END4             0x00020000                                      /*  5th Sample is End of Sequence */
#define ADC_SSCTL0_D4               0x00010000                                      /*  5th Sample Differential Input Select */
#define ADC_SSCTL0_TS3              0x00008000                                      /*  4th Sample Temp Sensor Select */
#define ADC_SSCTL0_IE3              0x00004000                                      /*  4th Sample Interrupt Enable */
#define ADC_SSCTL0_END3             0x00002000                                      /*  4th Sample is End of Sequence */
#define ADC_SSCTL0_D3               0x00001000                                      /*  4th Sample Differential Input Select */
#define ADC_SSCTL0_TS2              0x00000800                                      /*  3rd Sample Temp Sensor Select */
#define ADC_SSCTL0_IE2              0x00000400                                      /*  3rd Sample Interrupt Enable */
#define ADC_SSCTL0_END2             0x00000200                                      /*  3rd Sample is End of Sequence */
#define ADC_SSCTL0_D2               0x00000100                                      /*  3rd Sample Differential Input Select */
#define ADC_SSCTL0_TS1              0x00000080                                      /*  2nd Sample Temp Sensor Select */
#define ADC_SSCTL0_IE1              0x00000040                                      /*  2nd Sample Interrupt Enable */
#define ADC_SSCTL0_END1             0x00000020                                      /*  2nd Sample is End of Sequence */
#define ADC_SSCTL0_D1               0x00000010                                      /*  2nd Sample Differential Input Select */
#define ADC_SSCTL0_TS0              0x00000008                                      /*  1st Sample Temp Sensor Select */
#define ADC_SSCTL0_IE0              0x00000004                                      /*  1st Sample Interrupt Enable */
#define ADC_SSCTL0_END0             0x00000002                                      /*  1st Sample is End of Sequence */
#define ADC_SSCTL0_D0               0x00000001                                      /*  1st Sample Differential Input Select */

    // Bit fields in the ADC_SSFIFO0 register                                           pp1118
#define ADC_SSFIFO0_DATA_M          0x00000FFF                                      /*  Conversion Result Data Mask */
#define ADC_SSFIFO0_DATA_S          0                                               /*  Conversion Result Data Shift */

    // Bit fields in the ADC_SSFSTAT0 register                                          pp1119
#define ADC_SSFSTAT0_FULL           0x00001000                                      /*  FIFO Full */
#define ADC_SSFSTAT0_EMPTY          0x00000100                                      /*  FIFO Empty */
#define ADC_SSFSTAT0_HPTR_M         0x000000F0                                      /*  FIFO Head Pointer Mask */
#define ADC_SSFSTAT0_TPTR_M         0x0000000F                                      /*  FIFO Tail Pointer Mask */
#define ADC_SSFSTAT0_HPTR_S         4                                               /*  FIFO Head Pointer Shift */
#define ADC_SSFSTAT0_TPTR_S         0                                               /*  FIFO Tail Pointer Shift */

    // Bit fields in the ADC_SSOP0 register                                             pp1121
#define ADC_SSOP0_S7DCOP            0x10000000                                      /*  Sample 7 Digital Comparator Operation */
#define ADC_SSOP0_S6DCOP            0x01000000                                      /*  Sample 6 Digital Comparator Operation */
#define ADC_SSOP0_S5DCOP            0x00100000                                      /*  Sample 5 Digital Comparator Operation */
#define ADC_SSOP0_S4DCOP            0x00010000                                      /*  Sample 4 Digital Comparator Operation */
#define ADC_SSOP0_S3DCOP            0x00001000                                      /*  Sample 3 Digital Comparator Operation */
#define ADC_SSOP0_S2DCOP            0x00000100                                      /*  Sample 2 Digital Comparator Operation */
#define ADC_SSOP0_S1DCOP            0x00000010                                      /*  Sample 1 Digital Comparator Operation */
#define ADC_SSOP0_S0DCOP            0x00000001                                      /*  Sample 0 Digital Comparator Operation */

    // Bit fields in the ADC_SSDC0 register                                             pp1123
#define ADC_SSDC0_S7DCSEL_M         0xF0000000                                      /*  Sample 7 Digital Comparator Select Mask */
#define ADC_SSDC0_S6DCSEL_M         0x0F000000                                      /*  Sample 6 Digital Comparator Select Mask */
#define ADC_SSDC0_S5DCSEL_M         0x00F00000                                      /*  Sample 5 Digital Comparator Select Mask */
#define ADC_SSDC0_S4DCSEL_M         0x000F0000                                      /*  Sample 4 Digital Comparator Select Mask */
#define ADC_SSDC0_S3DCSEL_M         0x0000F000                                      /*  Sample 3 Digital Comparator Select Mask */
#define ADC_SSDC0_S2DCSEL_M         0x00000F00                                      /*  Sample 2 Digital Comparator Select Mask */
#define ADC_SSDC0_S1DCSEL_M         0x000000F0                                      /*  Sample 1 Digital Comparator Select Mask */
#define ADC_SSDC0_S0DCSEL_M         0x0000000F                                      /*  Sample 0 Digital Comparator Select Mask */
#define ADC_SSDC0_S7DCSEL_S         28                                              /*  Sample 7 Digital Comparator Select Shift */
#define ADC_SSDC0_S6DCSEL_S         24                                              /*  Sample 6 Digital Comparator Select Shift */
#define ADC_SSDC0_S5DCSEL_S         20                                              /*  Sample 5 Digital Comparator Select Shift */
#define ADC_SSDC0_S4DCSEL_S         16                                              /*  Sample 4 Digital Comparator Select Shift */
#define ADC_SSDC0_S3DCSEL_S         12                                              /*  Sample 3 Digital Comparator Select Shift */
#define ADC_SSDC0_S2DCSEL_S         8                                               /*  Sample 2 Digital Comparator Select Shift */
#define ADC_SSDC0_S1DCSEL_S         4                                               /*  Sample 1 Digital Comparator Select Shift */
#define ADC_SSDC0_S0DCSEL_S         0                                               /*  Sample 0 Digital Comparator Select Shift */

    // Bit fields in the ADC_SSEMUX0 register                                           pp1125
#define ADC_SSEMUX0_EMUX7           0x10000000                                      /*  8th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX6           0x01000000                                      /*  7th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX5           0x00100000                                      /*  6th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX4           0x00010000                                      /*  5th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX3           0x00001000                                      /*  4th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX2           0x00000100                                      /*  3rd Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX1           0x00000010                                      /*  2th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX0_EMUX0           0x00000001                                      /*  1st Sample Input Select (Upper Bit) */

    // Bit fields in the ADC_SSTSH0 register                                            pp1127
#define ADC_SSTSH0_TSH7_M           0xF0000000                                      /*  8th Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH6_M           0x0F000000                                      /*  7th Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH5_M           0x00F00000                                      /*  6th Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH4_M           0x000F0000                                      /*  5th Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH3_M           0x0000F000                                      /*  4th Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH2_M           0x00000F00                                      /*  3rd Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH1_M           0x000000F0                                      /*  2nd Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH0_M           0x0000000F                                      /*  1st Sample and Hold Period Select Mask */
#define ADC_SSTSH0_TSH7_S           28                                              /*  8th Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH6_S           24                                              /*  7th Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH5_S           20                                              /*  6th Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH4_S           16                                              /*  5th Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH3_S           12                                              /*  4th Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH2_S           8                                               /*  3rd Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH1_S           4                                               /*  2nd Sample and Hold Period Select Shift */
#define ADC_SSTSH0_TSH0_S           0                                               /*  1st Sample and Hold Period Select Shift */

    // Bit fields in the ADC_SSMUX1 register                                            pp1129
#define ADC_SSMUX1_MUX3_M           0x0000F000                                      /*  4th Sample Input Select Mask */
#define ADC_SSMUX1_MUX2_M           0x00000F00                                      /*  3rd Sample Input Select Mask */
#define ADC_SSMUX1_MUX1_M           0x000000F0                                      /*  2nd Sample Input Select Mask */
#define ADC_SSMUX1_MUX0_M           0x0000000F                                      /*  1st Sample Input Select Mask */
#define ADC_SSMUX1_MUX3_S           12                                              /*  4th Sample Input Select Shift */
#define ADC_SSMUX1_MUX2_S           8                                               /*  3rd Sample Input Select Shift */
#define ADC_SSMUX1_MUX1_S           4                                               /*  2nd Sample Input Select Shift */
#define ADC_SSMUX1_MUX0_S           0                                               /*  1st Sample Input Select Shift */

    // Bit fields in the ADC_SSCTL1 register                                            pp1130
#define ADC_SSCTL1_TS3              0x00008000                                      /*  4th Sample Temp Sensor Select */
#define ADC_SSCTL1_IE3              0x00004000                                      /*  4th Sample Interrupt Enable */
#define ADC_SSCTL1_END3             0x00002000                                      /*  4th Sample is End of Sequence */
#define ADC_SSCTL1_D3               0x00001000                                      /*  4th Sample Differential Input Select */
#define ADC_SSCTL1_TS2              0x00000800                                      /*  3rd Sample Temp Sensor Select */
#define ADC_SSCTL1_IE2              0x00000400                                      /*  3rd Sample Interrupt Enable */
#define ADC_SSCTL1_END2             0x00000200                                      /*  3rd Sample is End of Sequence */
#define ADC_SSCTL1_D2               0x00000100                                      /*  3rd Sample Differential Input Select */
#define ADC_SSCTL1_TS1              0x00000080                                      /*  2nd Sample Temp Sensor Select */
#define ADC_SSCTL1_IE1              0x00000040                                      /*  2nd Sample Interrupt Enable */
#define ADC_SSCTL1_END1             0x00000020                                      /*  2nd Sample is End of Sequence */
#define ADC_SSCTL1_D1               0x00000010                                      /*  2nd Sample Differential Input Select */
#define ADC_SSCTL1_TS0              0x00000008                                      /*  1st Sample Temp Sensor Select */
#define ADC_SSCTL1_IE0              0x00000004                                      /*  1st Sample Interrupt Enable */
#define ADC_SSCTL1_END0             0x00000002                                      /*  1st Sample is End of Sequence */
#define ADC_SSCTL1_D0               0x00000001                                      /*  1st Sample Differential Input Select */

    // Bit fields in the ADC_SSFIFO1 register                                           pp1118
#define ADC_SSFIFO1_DATA_M          0x00000FFF                                      /*  Conversion Result Data Mask */
#define ADC_SSFIFO1_DATA_S          0                                               /*  Conversion Result Data Shift */

    // Bit fields in the ADC_SSFSTAT1 register                                          pp1119
#define ADC_SSFSTAT1_FULL           0x00001000                                      /*  FIFO Full */
#define ADC_SSFSTAT1_EMPTY          0x00000100                                      /*  FIFO Empty */
#define ADC_SSFSTAT1_HPTR_M         0x000000F0                                      /*  FIFO Head Pointer Mask */
#define ADC_SSFSTAT1_TPTR_M         0x0000000F                                      /*  FIFO Tail Pointer Mask */
#define ADC_SSFSTAT1_HPTR_S         4                                               /*  FIFO Head Pointer Shift */
#define ADC_SSFSTAT1_TPTR_S         0                                               /*  FIFO Tail Pointer Shift */

    // Bit fields in the ADC_SSOP1 register                                             pp1134
#define ADC_SSOP1_S3DCOP            0x00001000                                      /*  Sample 3 Digital Comparator Operation */
#define ADC_SSOP1_S2DCOP            0x00000100                                      /*  Sample 2 Digital Comparator Operation */
#define ADC_SSOP1_S1DCOP            0x00000010                                      /*  Sample 1 Digital Comparator Operation */
#define ADC_SSOP1_S0DCOP            0x00000001                                      /*  Sample 0 Digital Comparator Operation */

    // Bit fields in the ADC_SSDC1 register                                             pp1135
#define ADC_SSDC1_S3DCSEL_M         0x0000F000                                      /*  Sample 3 Digital Comparator Select Mask */
#define ADC_SSDC1_S2DCSEL_M         0x00000F00                                      /*  Sample 2 Digital Comparator Select Mask */
#define ADC_SSDC1_S1DCSEL_M         0x000000F0                                      /*  Sample 1 Digital Comparator Select Mask */
#define ADC_SSDC1_S0DCSEL_M         0x0000000F                                      /*  Sample 0 Digital Comparator Select Mask */
#define ADC_SSDC1_S3DCSEL_S         12                                              /*  Sample 3 Digital Comparator Select Shift */
#define ADC_SSDC1_S2DCSEL_S         8                                               /*  Sample 2 Digital Comparator Select Shift */
#define ADC_SSDC1_S1DCSEL_S         4                                               /*  Sample 1 Digital Comparator Select Shift */
#define ADC_SSDC1_S0DCSEL_S         0                                               /*  Sample 0 Digital Comparator Select Shift */

    // Bit fields in the ADC_SSEMUX1 register                                           pp1137
#define ADC_SSEMUX1_EMUX3           0x00001000                                      /*  4th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX1_EMUX2           0x00000100                                      /*  3rd Sample Input Select (Upper Bit) */
#define ADC_SSEMUX1_EMUX1           0x00000010                                      /*  2th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX1_EMUX0           0x00000001                                      /*  1st Sample Input Select (Upper Bit) */

    // Bit fields in the ADC_SSTSH1 register                                            pp1139
#define ADC_SSTSH1_TSH3_M           0x0000F000                                      /*  4th Sample and Hold Period Select Mask */
#define ADC_SSTSH1_TSH2_M           0x00000F00                                      /*  3rd Sample and Hold Period Select Mask */
#define ADC_SSTSH1_TSH1_M           0x000000F0                                      /*  2nd Sample and Hold Period Select Mask */
#define ADC_SSTSH1_TSH0_M           0x0000000F                                      /*  1st Sample and Hold Period Select Mask */
#define ADC_SSTSH1_TSH3_S           12                                              /*  4th Sample and Hold Period Select Shift */
#define ADC_SSTSH1_TSH2_S           8                                               /*  3rd Sample and Hold Period Select Shift */
#define ADC_SSTSH1_TSH1_S           4                                               /*  2nd Sample and Hold Period Select Shift */
#define ADC_SSTSH1_TSH0_S           0                                               /*  1st Sample and Hold Period Select Shift */

    // Bit fields in the ADC_SSMUX2 register                                            pp1129
#define ADC_SSMUX2_MUX3_M           0x0000F000                                      /*  4th Sample Input Select Mask */
#define ADC_SSMUX2_MUX2_M           0x00000F00                                      /*  3rd Sample Input Select Mask */
#define ADC_SSMUX2_MUX1_M           0x000000F0                                      /*  2nd Sample Input Select Mask */
#define ADC_SSMUX2_MUX0_M           0x0000000F                                      /*  1st Sample Input Select Mask */
#define ADC_SSMUX2_MUX3_S           12                                              /*  4th Sample Input Select Shift */
#define ADC_SSMUX2_MUX2_S           8                                               /*  3rd Sample Input Select Shift */
#define ADC_SSMUX2_MUX1_S           4                                               /*  2nd Sample Input Select Shift */
#define ADC_SSMUX2_MUX0_S           0                                               /*  1st Sample Input Select Shift */

    // Bit fields in the ADC_SSCTL2 register                                            pp1130
#define ADC_SSCTL2_TS3              0x00008000                                      /*  4th Sample Temp Sensor Select */
#define ADC_SSCTL2_IE3              0x00004000                                      /*  4th Sample Interrupt Enable */
#define ADC_SSCTL2_END3             0x00002000                                      /*  4th Sample is End of Sequence */
#define ADC_SSCTL2_D3               0x00001000                                      /*  4th Sample Differential Input Select */
#define ADC_SSCTL2_TS2              0x00000800                                      /*  3rd Sample Temp Sensor Select */
#define ADC_SSCTL2_IE2              0x00000400                                      /*  3rd Sample Interrupt Enable */
#define ADC_SSCTL2_END2             0x00000200                                      /*  3rd Sample is End of Sequence */
#define ADC_SSCTL2_D2               0x00000100                                      /*  3rd Sample Differential Input Select */
#define ADC_SSCTL2_TS1              0x00000080                                      /*  2nd Sample Temp Sensor Select */
#define ADC_SSCTL2_IE1              0x00000040                                      /*  2nd Sample Interrupt Enable */
#define ADC_SSCTL2_END1             0x00000020                                      /*  2nd Sample is End of Sequence */
#define ADC_SSCTL2_D1               0x00000010                                      /*  2nd Sample Differential Input Select */
#define ADC_SSCTL2_TS0              0x00000008                                      /*  1st Sample Temp Sensor Select */
#define ADC_SSCTL2_IE0              0x00000004                                      /*  1st Sample Interrupt Enable */
#define ADC_SSCTL2_END0             0x00000002                                      /*  1st Sample is End of Sequence */
#define ADC_SSCTL2_D0               0x00000001                                      /*  1st Sample Differential Input Select */

    // Bit fields in the ADC_SSFIFO2 register                                           pp1118
#define ADC_SSFIFO2_DATA_M          0x00000FFF                                      /*  Conversion Result Data Mask */
#define ADC_SSFIFO2_DATA_S          0                                               /*  Conversion Result Data Shift */

    // Bit fields in the ADC_SSFSTAT2 register                                          pp1119
#define ADC_SSFSTAT2_FULL           0x00001000                                      /*  FIFO Full */
#define ADC_SSFSTAT2_EMPTY          0x00000100                                      /*  FIFO Empty */
#define ADC_SSFSTAT2_HPTR_M         0x000000F0                                      /*  FIFO Head Pointer Mask */
#define ADC_SSFSTAT2_TPTR_M         0x0000000F                                      /*  FIFO Tail Pointer Mask */
#define ADC_SSFSTAT2_HPTR_S         4                                               /*  FIFO Head Pointer Shift */
#define ADC_SSFSTAT2_TPTR_S         0                                               /*  FIFO Tail Pointer Shift */

    // Bit fields in the ADC_SSOP2 register                                             pp1134
#define ADC_SSOP2_S3DCOP            0x00001000                                      /*  Sample 3 Digital Comparator Operation */
#define ADC_SSOP2_S2DCOP            0x00000100                                      /*  Sample 2 Digital Comparator Operation */
#define ADC_SSOP2_S1DCOP            0x00000010                                      /*  Sample 1 Digital Comparator Operation */
#define ADC_SSOP2_S0DCOP            0x00000001                                      /*  Sample 0 Digital Comparator Operation */

    // Bit fields in the ADC_SSDC2 register                                             pp1135
#define ADC_SSDC2_S3DCSEL_M         0x0000F000                                      /*  Sample 3 Digital Comparator Select Mask */
#define ADC_SSDC2_S2DCSEL_M         0x00000F00                                      /*  Sample 2 Digital Comparator Select Mask */
#define ADC_SSDC2_S1DCSEL_M         0x000000F0                                      /*  Sample 1 Digital Comparator Select Mask */
#define ADC_SSDC2_S0DCSEL_M         0x0000000F                                      /*  Sample 0 Digital Comparator Select Mask */
#define ADC_SSDC2_S3DCSEL_S         12                                              /*  Sample 3 Digital Comparator Select Shift */
#define ADC_SSDC2_S2DCSEL_S         8                                               /*  Sample 2 Digital Comparator Select Shift */
#define ADC_SSDC2_S1DCSEL_S         4                                               /*  Sample 1 Digital Comparator Select Shift */
#define ADC_SSDC2_S0DCSEL_S         0                                               /*  Sample 0 Digital Comparator Select Shift */

    // Bit fields in the ADC_SSEMUX2 register                                           pp1137
#define ADC_SSEMUX2_EMUX3           0x00001000                                      /*  4th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX2_EMUX2           0x00000100                                      /*  3rd Sample Input Select (Upper Bit) */
#define ADC_SSEMUX2_EMUX1           0x00000010                                      /*  2th Sample Input Select (Upper Bit) */
#define ADC_SSEMUX2_EMUX0           0x00000001                                      /*  1st Sample Input Select (Upper Bit) */

    // Bit fields in the ADC_SSTSH2 register                                            pp1139
#define ADC_SSTSH2_TSH3_M           0x0000F000                                      /*  4th Sample and Hold Period Select Mask */
#define ADC_SSTSH2_TSH2_M           0x00000F00                                      /*  3rd Sample and Hold Period Select Mask */
#define ADC_SSTSH2_TSH1_M           0x000000F0                                      /*  2nd Sample and Hold Period Select Mask */
#define ADC_SSTSH2_TSH0_M           0x0000000F                                      /*  1st Sample and Hold Period Select Mask */
#define ADC_SSTSH2_TSH3_S           12                                              /*  4th Sample and Hold Period Select Shift */
#define ADC_SSTSH2_TSH2_S           8                                               /*  3rd Sample and Hold Period Select Shift */
#define ADC_SSTSH2_TSH1_S           4                                               /*  2nd Sample and Hold Period Select Shift */
#define ADC_SSTSH2_TSH0_S           0                                               /*  1st Sample and Hold Period Select Shift */

    // Bit fields in the ADC_SSMUX3 register                                            pp1141
#define ADC_SSMUX3_MUX0_M           0x0000000F                                      /*  1st Sample Input Select Mask */
#define ADC_SSMUX3_MUX0_S           0                                               /*  1st Sample Input Select Shift */

    // Bit fields in the ADC_SSCTL3 register                                            pp1142
#define ADC_SSCTL3_TS0              0x00000008                                      /*  1st Sample Temp Sensor Select */
#define ADC_SSCTL3_IE0              0x00000004                                      /*  Sample Interrupt Enable */
#define ADC_SSCTL3_END0             0x00000002                                      /*  End of Sequence */
#define ADC_SSCTL3_D0               0x00000001                                      /*  Sample Differential Input Select */

    // Bit fields in the ADC_SSFIFO3 register                                           pp1118
#define ADC_SSFIFO3_DATA_M          0x00000FFF                                      /*  Conversion Result Data Mask */
#define ADC_SSFIFO3_DATA_S          0                                               /*  Conversion Result Data Shift */

    // Bit fields in the ADC_SSFSTAT3 register                                          pp1119
#define ADC_SSFSTAT3_FULL           0x00001000                                      /*  FIFO Full */
#define ADC_SSFSTAT3_EMPTY          0x00000100                                      /*  FIFO Empty */
#define ADC_SSFSTAT3_HPTR_M         0x000000F0                                      /*  FIFO Head Pointer Mask */
#define ADC_SSFSTAT3_TPTR_M         0x0000000F                                      /*  FIFO Tail Pointer Mask */
#define ADC_SSFSTAT3_HPTR_S         4                                               /*  FIFO Head Pointer Shift */
#define ADC_SSFSTAT3_TPTR_S         0                                               /*  FIFO Tail Pointer Shift */

    // Bit fields in the ADC_SSOP3 register                                             pp1144
#define ADC_SSOP3_S0DCOP            0x00000001                                      /*  Sample 0 Digital Comparator Operation */

    // Bit fields in the ADC_SSDC3 register                                             pp1145
#define ADC_SSDC3_S0DCSEL_M         0x0000000F                                      /*  Sample 0 Digital Comparator Select Mask */

    // Bit fields in the ADC_SSEMUX3 register                                           pp1146
#define ADC_SSEMUX3_EMUX0           0x00000001                                      /*  1st Sample Input Select (Upper Bit) */

    // Bit fields in the ADC_SSTSH3 register                                            pp1147
#define ADC_SSTSH3_TSH0_M           0x0000000F                                      /*  1st Sample and Hold Period Select Mask */
#define ADC_SSTSH3_TSH0_S           0                                               /*  1st Sample and Hold Period Select Shift */

    // Bit fields in the ADC_DCRIC register                                             pp1148
#define ADC_DCRIC_DCTRIG7           0x00800000                                      /*  Digital Comparator Trigger 7 */
#define ADC_DCRIC_DCTRIG6           0x00400000                                      /*  Digital Comparator Trigger 6 */
#define ADC_DCRIC_DCTRIG5           0x00200000                                      /*  Digital Comparator Trigger 5 */
#define ADC_DCRIC_DCTRIG4           0x00100000                                      /*  Digital Comparator Trigger 4 */
#define ADC_DCRIC_DCTRIG3           0x00080000                                      /*  Digital Comparator Trigger 3 */
#define ADC_DCRIC_DCTRIG2           0x00040000                                      /*  Digital Comparator Trigger 2 */
#define ADC_DCRIC_DCTRIG1           0x00020000                                      /*  Digital Comparator Trigger 1 */
#define ADC_DCRIC_DCTRIG0           0x00010000                                      /*  Digital Comparator Trigger 0 */
#define ADC_DCRIC_DCINT7            0x00000080                                      /*  Digital Comparator Interrupt 7 */
#define ADC_DCRIC_DCINT6            0x00000040                                      /*  Digital Comparator Interrupt 6 */
#define ADC_DCRIC_DCINT5            0x00000020                                      /*  Digital Comparator Interrupt 5 */
#define ADC_DCRIC_DCINT4            0x00000010                                      /*  Digital Comparator Interrupt 4 */
#define ADC_DCRIC_DCINT3            0x00000008                                      /*  Digital Comparator Interrupt 3 */
#define ADC_DCRIC_DCINT2            0x00000004                                      /*  Digital Comparator Interrupt 2 */
#define ADC_DCRIC_DCINT1            0x00000002                                      /*  Digital Comparator Interrupt 1 */
#define ADC_DCRIC_DCINT0            0x00000001                                      /*  Digital Comparator Interrupt 0 */

    // Bit fields in the ADC_DCCTL0 register                                            pp1153
#define ADC_DCCTL0_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL0_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL0_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL0_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL0_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL0_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL0_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL0_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL0_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL0_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL0_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL0_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL0_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL0_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL0_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL0_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL0_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL0_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL0_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL0_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL1 register                                            pp1153
#define ADC_DCCTL1_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL1_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL1_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL1_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL1_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL1_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL1_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL1_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL1_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL1_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL1_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL1_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL1_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL1_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL1_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL1_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL1_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL1_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL1_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL1_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL2 register                                            pp1153
#define ADC_DCCTL2_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL2_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL2_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL2_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL2_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL2_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL2_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL2_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL2_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL2_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL2_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL2_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL2_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL2_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL2_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL2_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL2_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL2_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL2_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL2_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL3 register                                            pp1153
#define ADC_DCCTL3_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL3_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL3_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL3_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL3_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL3_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL3_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL3_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL3_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL3_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL3_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL3_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL3_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL3_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL3_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL3_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL3_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL3_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL3_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL3_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL4 register                                            pp1153
#define ADC_DCCTL4_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL4_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL4_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL4_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL4_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL4_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL4_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL4_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL4_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL4_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL4_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL4_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL4_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL4_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL4_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL4_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL4_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL4_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL4_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL4_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL5 register                                            pp1153
#define ADC_DCCTL5_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL5_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL5_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL5_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL5_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL5_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL5_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL5_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL5_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL5_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL5_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL5_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL5_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL5_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL5_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL5_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL5_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL5_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL5_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL5_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL6 register                                            pp1153
#define ADC_DCCTL6_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL6_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL6_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL6_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL6_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL6_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL6_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL6_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL6_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL6_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL6_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL6_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL6_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL6_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL6_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL6_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL6_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL6_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL6_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL6_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCTL7 register                                            pp1153
#define ADC_DCCTL7_CTE              0x00001000                                      /*  Comparison Trigger Enable */
#define ADC_DCCTL7_CTC_M            0x00000C00                                      /*  Comparison Trigger Condition Mask */
#define ADC_DCCTL7_CTC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL7_CTC_MID          0x00000400                                      /*  Mid Band */
#define ADC_DCCTL7_CTC_HIGH         0x00000C00                                      /*  High Band */
#define ADC_DCCTL7_CTM_M            0x00000300                                      /*  Comparison Trigger Mode Mask */
#define ADC_DCCTL7_CTM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL7_CTM_ONCE         0x00000100                                      /*  Once */
#define ADC_DCCTL7_CTM_HALWAYS      0x00000200                                      /*  Hysteresis Always */
#define ADC_DCCTL7_CTM_HONCE        0x00000300                                      /*  Hysteresis Once */
#define ADC_DCCTL7_CIE              0x00000010                                      /*  Comparison Interrupt Enable */
#define ADC_DCCTL7_CIC_M            0x0000000C                                      /*  Comparison Interrupt Condition Mask */
#define ADC_DCCTL7_CIC_LOW          0x00000000                                      /*  Low Band */
#define ADC_DCCTL7_CIC_MID          0x00000004                                      /*  Mid Band */
#define ADC_DCCTL7_CIC_HIGH         0x0000000C                                      /*  High Band */
#define ADC_DCCTL7_CIM_M            0x00000003                                      /*  Comparison Interrupt Mode Mask */
#define ADC_DCCTL7_CIM_ALWAYS       0x00000000                                      /*  Always */
#define ADC_DCCTL7_CIM_ONCE         0x00000001                                      /*  Once */
#define ADC_DCCTL7_CIM_HALWAYS      0x00000002                                      /*  Hysteresis Always */
#define ADC_DCCTL7_CIM_HONCE        0x00000003                                      /*  Hysteresis Once */

    // Bit fields in the ADC_DCCMP0 register                                            pp1156
#define ADC_DCCMP0_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP0_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP0_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP0_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP1 register                                            pp1156
#define ADC_DCCMP1_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP1_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP1_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP1_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP2 register                                            pp1156
#define ADC_DCCMP2_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP2_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP2_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP2_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP3 register                                            pp1156
#define ADC_DCCMP3_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP3_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP3_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP3_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP4 register                                            pp1156
#define ADC_DCCMP4_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP4_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP4_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP4_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP5 register                                            pp1156
#define ADC_DCCMP5_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP5_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP5_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP5_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP6 register                                            pp1156
#define ADC_DCCMP6_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP6_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP6_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP6_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_DCCMP7 register                                            pp1156
#define ADC_DCCMP7_COMP1_M          0x0FFF0000                                      /*  Compare 1 Mask */
#define ADC_DCCMP7_COMP0_M          0x00000FFF                                      /*  Compare 0 Mask */
#define ADC_DCCMP7_COMP1_S          16                                              /*  Compare 1 Shift */
#define ADC_DCCMP7_COMP0_S          0                                               /*  Compare 0 Shift */

    // Bit fields in the ADC_PP register                                                pp1157
#define ADC_PP_APSHT                0x01000000                                      /*  Application-Programmable Sample-and-Hold Time */
#define ADC_PP_TS                   0x00800000                                      /*  Temperature Sensor */
#define ADC_PP_RSL_M                0x007C0000                                      /*  Resolution Mask */
#define ADC_PP_TYPE_M               0x00030000                                      /*  ADC Architecture Mask */
#define ADC_PP_TYPE_SAR             0x00000000                                      /*  SAR */
#define ADC_PP_DC_M                 0x0000FC00                                      /*  Digital Comparator Count Mask */
#define ADC_PP_CH_M                 0x000003F0                                      /*  ADC Channel Count Mask */
#define ADC_PP_MCR_M                0x0000000F                                      /*  Maximum Conversion Rate Mask */
#define ADC_PP_MCR_FULL             0x00000007                                      /*  Full conversion rate (FCONV) as defined by TADC and NSH */
#define ADC_PP_RSL_S                18                                              /*  Resolution Shift */
#define ADC_PP_DC_S                 10                                              /*  Digital Comparator Count Shift */
#define ADC_PP_CH_S                 4                                               /*  ADC Channel Count Shift */

    // Bit fields in the ADC_PC register                                                pp1159
#define ADC_PC_MCR_M                0x0000000F                                      /*  Conversion Rate Mask */
#define ADC_PC_MCR_1_8              0x00000001                                      /*  Eighth conversion rate. After a conversion completes, the logic pauses for 112 TADC periods before starting the next conversion */
#define ADC_PC_MCR_1_4              0x00000003                                      /*  Quarter conversion rate. After a conversion completes, the logic pauses for 48 TADC periods before starting the next conversion */
#define ADC_PC_MCR_1_2              0x00000005                                      /*  Half conversion rate. After a conversion completes, the logic pauses for 16 TADC periods before starting the next conversion */
#define ADC_PC_MCR_FULL             0x00000007                                      /*  Full conversion rate (FCONV) as defined by TADC and NSH */

    // Bit fields in the ADC_CC register                                                pp1160
#define ADC_CC_CLKDIV_M             0x000003F0                                      /*  PLL VCO Clock Divisor Mask */
#define ADC_CC_CS_M                 0x0000000F                                      /*  ADC Clock Source Mask */
#define ADC_CC_CS_SYSPLL            0x00000000                                      /*  PLL VCO divided by CLKDIV */
#define ADC_CC_CS_PIOSC             0x00000001                                      /*  PIOSC */
#define ADC_CC_CS_MOSC              0x00000002                                      /*  MOSC */
#define ADC_CC_CLKDIV_S             4                                               /*  PLL VCO Clock Divisor Shift */
