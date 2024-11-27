/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apuntadores a registros
 */

/**
 * System Control (SYSCTL) registers													pp247	Register map
 */
#define SYSCTL_PLLFREQ0_R           (*((volatile uint32_t *)0x400FE160))    		/*	pp292	PLL Frequency 0 */
#define SYSCTL_PLLSTAT_R            (*((volatile uint32_t *)0x400FE168))    		/*	pp294	PLL Status */
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)0x400FE604))    		/*	pp380	GPTM Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R           (*((volatile uint32_t *)0x400FE608))    		/*	pp382	GPIO Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R           (*((volatile uint32_t *)0x400FE618))    		/*	pp388	UART Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R            (*((volatile uint32_t *)0x400FE61C))    		/*	pp390	SSI Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R            (*((volatile uint32_t *)0x400FE620))    		/*	pp391	I2C Run Mode Clock Gating Control */
#define SYSCTL_RCGCADC_R            (*((volatile uint32_t *)0x400FE638))    		/*	pp396	ADC Run Mode Clock Gating Control */
#define SYSCTL_PRTIMER_R            (*((volatile uint32_t *)0x400FEA04))    		/*	pp497	GPTM Peripheral Ready */
#define SYSCTL_PRGPIO_R             (*((volatile uint32_t *)0x400FEA08))    		/*	pp499	GPIO Peripheral Ready */
#define SYSCTL_PRUART_R             (*((volatile uint32_t *)0x400FEA18))    		/*	pp505	UART Peripheral Ready */
#define SYSCTL_PRSSI_R              (*((volatile uint32_t *)0x400FEA1C))    		/*	pp507	SSI Peripheral Ready */
#define SYSCTL_PRI2C_R              (*((volatile uint32_t *)0x400FEA20))    		/*	pp509	I2C Peripheral Ready */
#define SYSCTL_PRADC_R              (*((volatile uint32_t *)0x400FEA38))    		/*	pp515	ADC Peripheral Ready */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
    // Bit fields in the SYSCTL_PLLFREQ0 register                                       pp292
#define SYSCTL_PLLFREQ0_PLLPWR      0x00800000                                      /*  PLL Power */
#define SYSCTL_PLLFREQ0_MFRAC_M     0x000FFC00                                      /*  PLL M Fractional Value Mask */
#define SYSCTL_PLLFREQ0_MINT_M      0x000003FF                                      /*  PLL M Integer Value Mask */
#define SYSCTL_PLLFREQ0_MFRAC_S     10                                              /*  PLL M Fractional Value Shift */
#define SYSCTL_PLLFREQ0_MINT_S      0                                               /*  PLL M Integer Value Shift */

    // Bit fields in the SYSCTL_PLLSTAT register                                        pp294
#define SYSCTL_PLLSTAT_LOCK         0x00000001                                      /*  PLL Lock */

    // Bit fields in the SYSCTL_RCGCTIMER register                                      pp380
#define SYSCTL_RCGCTIMER_R7         0x00000080                                      /*  16/32-Bit General-Purpose Timer 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R6         0x00000040                                      /*  16/32-Bit General-Purpose Timer 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R5         0x00000020                                      /*  16/32-Bit General-Purpose Timer 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R4         0x00000010                                      /*  16/32-Bit General-Purpose Timer 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R3         0x00000008                                      /*  16/32-Bit General-Purpose Timer 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R2         0x00000004                                      /*  16/32-Bit General-Purpose Timer 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R1         0x00000002                                      /*  16/32-Bit General-Purpose Timer 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R0         0x00000001                                      /*  16/32-Bit General-Purpose Timer 0 Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_RCGCGPIO register                                       pp382
#define SYSCTL_RCGCGPIO_R14         0x00004000                                      /*  GPIO Port Q Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R13         0x00002000                                      /*  GPIO Port P Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R12         0x00001000                                      /*  GPIO Port N Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R11         0x00000800                                      /*  GPIO Port M Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R10         0x00000400                                      /*  GPIO Port L Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R9          0x00000200                                      /*  GPIO Port K Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R8          0x00000100                                      /*  GPIO Port J Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R7          0x00000080                                      /*  GPIO Port H Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R6          0x00000040                                      /*  GPIO Port G Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R5          0x00000020                                      /*  GPIO Port F Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R4          0x00000010                                      /*  GPIO Port E Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R3          0x00000008                                      /*  GPIO Port D Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R2          0x00000004                                      /*  GPIO Port C Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R1          0x00000002                                      /*  GPIO Port B Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R0          0x00000001                                      /*  GPIO Port A Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_RCGCUART register                                       pp388
#define SYSCTL_RCGCUART_R7          0x00000080                                      /*  UART Module 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R6          0x00000040                                      /*  UART Module 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R5          0x00000020                                      /*  UART Module 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R4          0x00000010                                      /*  UART Module 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R3          0x00000008                                      /*  UART Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R2          0x00000004                                      /*  UART Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R1          0x00000002                                      /*  UART Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R0          0x00000001                                      /*  UART Module 0 Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_RCGCSSI register                                        pp390
#define SYSCTL_RCGCSSI_R3           0x00000008                                      /*  SSI Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R2           0x00000004                                      /*  SSI Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R1           0x00000002                                      /*  SSI Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R0           0x00000001                                      /*  SSI Module 0 Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_RCGCI2C register                                        pp391
#define SYSCTL_RCGCI2C_R9           0x00000200                                      /*  I2C Module 9 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R8           0x00000100                                      /*  I2C Module 8 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R7           0x00000080                                      /*  I2C Module 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R6           0x00000040                                      /*  I2C Module 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R5           0x00000020                                      /*  I2C Module 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R4           0x00000010                                      /*  I2C Module 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R3           0x00000008                                      /*  I2C Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R2           0x00000004                                      /*  I2C Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R1           0x00000002                                      /*  I2C Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R0           0x00000001                                      /*  I2C Module 0 Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_RCGCADC register                                        pp396
#define SYSCTL_RCGCADC_R1           0x00000002                                      /*  ADC Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCADC_R0           0x00000001                                      /*  ADC Module 0 Run Mode Clock Gating Control */

    // Bit fields in the SYSCTL_PRTIMER register                                        pp497
#define SYSCTL_PRTIMER_R7           0x00000080                                      /*  16/32-Bit General-Purpose Timer 7 Peripheral Ready */
#define SYSCTL_PRTIMER_R6           0x00000040                                      /*  16/32-Bit General-Purpose Timer 6 Peripheral Ready */
#define SYSCTL_PRTIMER_R5           0x00000020                                      /*  16/32-Bit General-Purpose Timer 5 Peripheral Ready */
#define SYSCTL_PRTIMER_R4           0x00000010                                      /*  16/32-Bit General-Purpose Timer 4 Peripheral Ready */
#define SYSCTL_PRTIMER_R3           0x00000008                                      /*  16/32-Bit General-Purpose Timer 3 Peripheral Ready */
#define SYSCTL_PRTIMER_R2           0x00000004                                      /*  16/32-Bit General-Purpose Timer 2 Peripheral Ready */
#define SYSCTL_PRTIMER_R1           0x00000002                                      /*  16/32-Bit General-Purpose Timer 1 Peripheral Ready */
#define SYSCTL_PRTIMER_R0           0x00000001                                      /*  16/32-Bit General-Purpose Timer 0 Peripheral Ready */

    // Bit fields in the SYSCTL_PRGPIO register                                         pp499
#define SYSCTL_PRGPIO_R14           0x00004000                                      /*  GPIO Port Q Peripheral Ready */
#define SYSCTL_PRGPIO_R13           0x00002000                                      /*  GPIO Port P Peripheral Ready */
#define SYSCTL_PRGPIO_R12           0x00001000                                      /*  GPIO Port N Peripheral Ready */
#define SYSCTL_PRGPIO_R11           0x00000800                                      /*  GPIO Port M Peripheral Ready */
#define SYSCTL_PRGPIO_R10           0x00000400                                      /*  GPIO Port L Peripheral Ready */
#define SYSCTL_PRGPIO_R9            0x00000200                                      /*  GPIO Port K Peripheral Ready */
#define SYSCTL_PRGPIO_R8            0x00000100                                      /*  GPIO Port J Peripheral Ready */
#define SYSCTL_PRGPIO_R7            0x00000080                                      /*  GPIO Port H Peripheral Ready */
#define SYSCTL_PRGPIO_R6            0x00000040                                      /*  GPIO Port G Peripheral Ready */
#define SYSCTL_PRGPIO_R5            0x00000020                                      /*  GPIO Port F Peripheral Ready */
#define SYSCTL_PRGPIO_R4            0x00000010                                      /*  GPIO Port E Peripheral Ready */
#define SYSCTL_PRGPIO_R3            0x00000008                                      /*  GPIO Port D Peripheral Ready */
#define SYSCTL_PRGPIO_R2            0x00000004                                      /*  GPIO Port C Peripheral Ready */
#define SYSCTL_PRGPIO_R1            0x00000002                                      /*  GPIO Port B Peripheral Ready */
#define SYSCTL_PRGPIO_R0            0x00000001                                      /*  GPIO Port A Peripheral Ready */

    // Bit fields in the SYSCTL_PRUART register                                         pp505
#define SYSCTL_PRUART_R7            0x00000080                                      /*  UART Module 7 Peripheral Ready */
#define SYSCTL_PRUART_R6            0x00000040                                      /*  UART Module 6 Peripheral Ready */
#define SYSCTL_PRUART_R5            0x00000020                                      /*  UART Module 5 Peripheral Ready */
#define SYSCTL_PRUART_R4            0x00000010                                      /*  UART Module 4 Peripheral Ready */
#define SYSCTL_PRUART_R3            0x00000008                                      /*  UART Module 3 Peripheral Ready */
#define SYSCTL_PRUART_R2            0x00000004                                      /*  UART Module 2 Peripheral Ready */
#define SYSCTL_PRUART_R1            0x00000002                                      /*  UART Module 1 Peripheral Ready */
#define SYSCTL_PRUART_R0            0x00000001                                      /*  UART Module 0 Peripheral Ready */

    // Bit fields in the SYSCTL_PRSSI register                                          pp507
#define SYSCTL_PRSSI_R3             0x00000008                                      /*  SSI Module 3 Peripheral Ready */
#define SYSCTL_PRSSI_R2             0x00000004                                      /*  SSI Module 2 Peripheral Ready */
#define SYSCTL_PRSSI_R1             0x00000002                                      /*  SSI Module 1 Peripheral Ready */
#define SYSCTL_PRSSI_R0             0x00000001                                      /*  SSI Module 0 Peripheral Ready */

    // Bit fields in the SYSCTL_PRI2C register                                          pp509
#define SYSCTL_PRI2C_R9             0x00000200                                      /*  I2C Module 9 Peripheral Ready */
#define SYSCTL_PRI2C_R8             0x00000100                                      /*  I2C Module 8 Peripheral Ready */
#define SYSCTL_PRI2C_R7             0x00000080                                      /*  I2C Module 7 Peripheral Ready */
#define SYSCTL_PRI2C_R6             0x00000040                                      /*  I2C Module 6 Peripheral Ready */
#define SYSCTL_PRI2C_R5             0x00000020                                      /*  I2C Module 5 Peripheral Ready */
#define SYSCTL_PRI2C_R4             0x00000010                                      /*  I2C Module 4 Peripheral Ready */
#define SYSCTL_PRI2C_R3             0x00000008                                      /*  I2C Module 3 Peripheral Ready */
#define SYSCTL_PRI2C_R2             0x00000004                                      /*  I2C Module 2 Peripheral Ready */
#define SYSCTL_PRI2C_R1             0x00000002                                      /*  I2C Module 1 Peripheral Ready */
#define SYSCTL_PRI2C_R0             0x00000001                                      /*  I2C Module 0 Peripheral Ready */

    // Bit fields in the SYSCTL_PRADC register                                          pp515
#define SYSCTL_PRADC_R1             0x00000002                                      /*  ADC Module 1 Peripheral Ready */
#define SYSCTL_PRADC_R0             0x00000001                                      /*  ADC Module 0 Peripheral Ready */
