/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apuntadores a registros
 */

/**
 * Nested Vectored Interrupt Controller (NVIC) registers								pp146	Register map
 */
	// System Timer (SysTick) registers
#define NVIC_ST_CTRL_R              (*((volatile uint32_t *)0xE000E010))		    /*	pp150	SysTick Control and Status */
#define NVIC_ST_RELOAD_R            (*((volatile uint32_t *)0xE000E014))		    /*	pp152	SysTick Reload Value */
#define NVIC_ST_CURRENT_R           (*((volatile uint32_t *)0xE000E018))		    /*	pp153	SysTick Current Value */
	// Nested Vectored Interrupt Controller (NVIC) registers
#define NVIC_EN0_R                  (*((volatile uint32_t *)0xE000E100))			/*	pp154	Interrupt 0-31 Set Enable */
#define NVIC_EN1_R                  (*((volatile uint32_t *)0xE000E104))			/*	pp154	Interrupt 32-63 Set Enable */
#define NVIC_EN2_R                  (*((volatile uint32_t *)0xE000E108))			/*	pp154	Interrupt 64-95 Set Enable */
#define NVIC_EN3_R                  (*((volatile uint32_t *)0xE000E10C))			/*	pp154	Interrupt 96-113 Set Enable */
#define NVIC_DIS0_R                 (*((volatile uint32_t *)0xE000E180))			/*	pp155	Interrupt 0-31 Clear Enable */
#define NVIC_DIS1_R                 (*((volatile uint32_t *)0xE000E184))			/*	pp155	Interrupt 32-63 Clear Enable */
#define NVIC_DIS2_R                 (*((volatile uint32_t *)0xE000E188))			/*	pp155	Interrupt 64-95 Clear Enable */
#define NVIC_DIS3_R                 (*((volatile uint32_t *)0xE000E18C))			/*	pp155	Interrupt 96-113 Clear Enable */
#define NVIC_PRI0_R                 (*((volatile uint32_t *)0xE000E400))			/*	pp159	Interrupt 0-3 Priority */
#define NVIC_PRI1_R                 (*((volatile uint32_t *)0xE000E404))			/*	pp159	Interrupt 4-7 Priority */
#define NVIC_PRI2_R                 (*((volatile uint32_t *)0xE000E408))			/*	pp159	Interrupt 8-11 Priority */
#define NVIC_PRI3_R                 (*((volatile uint32_t *)0xE000E40C))			/*	pp159	Interrupt 12-15 Priority */
#define NVIC_PRI4_R                 (*((volatile uint32_t *)0xE000E410))			/*	pp159	Interrupt 16-19 Priority */
#define NVIC_PRI5_R                 (*((volatile uint32_t *)0xE000E414))			/*	pp159	Interrupt 20-23 Priority */
#define NVIC_PRI6_R                 (*((volatile uint32_t *)0xE000E418))			/*	pp159	Interrupt 24-27 Priority */
#define NVIC_PRI7_R                 (*((volatile uint32_t *)0xE000E41C))			/*	pp159	Interrupt 28-31 Priority */
#define NVIC_PRI8_R                 (*((volatile uint32_t *)0xE000E420))			/*	pp159	Interrupt 32-35 Priority */
#define NVIC_PRI9_R                 (*((volatile uint32_t *)0xE000E424))			/*	pp159	Interrupt 36-39 Priority */
#define NVIC_PRI10_R                (*((volatile uint32_t *)0xE000E428))			/*	pp159	Interrupt 40-43 Priority */
#define NVIC_PRI11_R                (*((volatile uint32_t *)0xE000E42C))			/*	pp159	Interrupt 44-47 Priority */
#define NVIC_PRI12_R                (*((volatile uint32_t *)0xE000E430))			/*	pp159	Interrupt 48-51 Priority */
#define NVIC_PRI13_R                (*((volatile uint32_t *)0xE000E434))			/*	pp159	Interrupt 52-55 Priority */
#define NVIC_PRI14_R                (*((volatile uint32_t *)0xE000E438))			/*	pp159	Interrupt 56-59 Priority */
#define NVIC_PRI15_R                (*((volatile uint32_t *)0xE000E43C))			/*	pp159	Interrupt 60-63 Priority */
#define NVIC_PRI16_R                (*((volatile uint32_t *)0xE000E440))			/*	pp161	Interrupt 64-67 Priority */
#define NVIC_PRI17_R                (*((volatile uint32_t *)0xE000E444))			/*	pp161	Interrupt 68-71 Priority */
#define NVIC_PRI18_R                (*((volatile uint32_t *)0xE000E448))			/*	pp161	Interrupt 72-75 Priority */
#define NVIC_PRI19_R                (*((volatile uint32_t *)0xE000E44C))			/*	pp161	Interrupt 76-79 Priority */
#define NVIC_PRI20_R                (*((volatile uint32_t *)0xE000E450))			/*	pp161	Interrupt 80-83 Priority */
#define NVIC_PRI21_R                (*((volatile uint32_t *)0xE000E454))			/*	pp161	Interrupt 84-87 Priority */
#define NVIC_PRI22_R                (*((volatile uint32_t *)0xE000E458))			/*	pp161	Interrupt 88-91 Priority */
#define NVIC_PRI23_R                (*((volatile uint32_t *)0xE000E45C))			/*	pp161	Interrupt 92-95 Priority */
#define NVIC_PRI24_R                (*((volatile uint32_t *)0xE000E460))			/*	pp161	Interrupt 96-99 Priority */
#define NVIC_PRI25_R                (*((volatile uint32_t *)0xE000E464))			/*	pp161	Interrupt 100-103 Priority */
#define NVIC_PRI26_R                (*((volatile uint32_t *)0xE000E468))			/*	pp161	Interrupt 104-107 Priority */
#define NVIC_PRI27_R                (*((volatile uint32_t *)0xE000E46C))			/*	pp161	Interrupt 108-111 Priority */
#define NVIC_PRI28_R                (*((volatile uint32_t *)0xE000E470))			/*	pp161	Interrupt 112-113 Priority */

/** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
 * Macros de apoyo
 */
    // Bit fields in the NVIC_ST_CTRL register                                          pp150
#define NVIC_ST_CTRL_COUNT          0x00010000                                      /*  Count Flag */
#define NVIC_ST_CTRL_CLK_SRC        0x00000004                                      /*  Clock Source */
#define NVIC_ST_CTRL_INTEN          0x00000002                                      /*  Interrupt Enable */
#define NVIC_ST_CTRL_ENABLE         0x00000001                                      /*  Enable */

    // Bit fields in the NVIC_ST_RELOAD register                                        pp152
#define NVIC_ST_RELOAD_M            0x00FFFFFF                                      /*  Reload Value Mask */
#define NVIC_ST_RELOAD_S            0                                               /*  Reload Value Shift */

    // Bit fields in the NVIC_ST_CURRENT register                                       pp153
#define NVIC_ST_CURRENT_M           0x00FFFFFF                                      /*  Current Value Mask */
#define NVIC_ST_CURRENT_S           0                                               /*  Current Value Shift */

    // Bit fields in the NVIC_PRI0 register                                             pp159
#define NVIC_PRI0_INT3_M            0xE0000000                                      /*  Interrupt 3 Priority Mask */
#define NVIC_PRI0_INT2_M            0x00E00000                                      /*  Interrupt 2 Priority Mask */
#define NVIC_PRI0_INT1_M            0x0000E000                                      /*  Interrupt 1 Priority Mask */
#define NVIC_PRI0_INT0_M            0x000000E0                                      /*  Interrupt 0 Priority Mask */
#define NVIC_PRI0_INT3_S            29                                              /*  Interrupt 3 Priority Shift */
#define NVIC_PRI0_INT2_S            21                                              /*  Interrupt 2 Priority Shift */
#define NVIC_PRI0_INT1_S            13                                              /*  Interrupt 1 Priority Shift */
#define NVIC_PRI0_INT0_S            5                                               /*  Interrupt 0 Priority Shift */

    // Bit fields in the NVIC_PRI1 register                                             pp159
#define NVIC_PRI1_INT7_M            0xE0000000                                      /*  Interrupt 7 Priority Mask */
#define NVIC_PRI1_INT6_M            0x00E00000                                      /*  Interrupt 6 Priority Mask */
#define NVIC_PRI1_INT5_M            0x0000E000                                      /*  Interrupt 5 Priority Mask */
#define NVIC_PRI1_INT4_M            0x000000E0                                      /*  Interrupt 4 Priority Mask */
#define NVIC_PRI1_INT7_S            29                                              /*  Interrupt 7 Priority Shift */
#define NVIC_PRI1_INT6_S            21                                              /*  Interrupt 6 Priority Shift */
#define NVIC_PRI1_INT5_S            13                                              /*  Interrupt 5 Priority Shift */
#define NVIC_PRI1_INT4_S            5                                               /*  Interrupt 4 Priority Shift */

    // Bit fields in the NVIC_PRI2 register                                             pp159
#define NVIC_PRI2_INT11_M           0xE0000000                                      /*  Interrupt 11 Priority Mask */
#define NVIC_PRI2_INT10_M           0x00E00000                                      /*  Interrupt 10 Priority Mask */
#define NVIC_PRI2_INT9_M            0x0000E000                                      /*  Interrupt 9 Priority Mask */
#define NVIC_PRI2_INT8_M            0x000000E0                                      /*  Interrupt 8 Priority Mask */
#define NVIC_PRI2_INT11_S           29                                              /*  Interrupt 11 Priority Shift */
#define NVIC_PRI2_INT10_S           21                                              /*  Interrupt 10 Priority Shift */
#define NVIC_PRI2_INT9_S            13                                              /*  Interrupt 9 Priority Shift */
#define NVIC_PRI2_INT8_S            5                                               /*  Interrupt 8 Priority Shift */

    // Bit fields in the NVIC_PRI3 register                                             pp159
#define NVIC_PRI3_INT15_M           0xE0000000                                      /*  Interrupt 15 Priority Mask */
#define NVIC_PRI3_INT14_M           0x00E00000                                      /*  Interrupt 14 Priority Mask */
#define NVIC_PRI3_INT13_M           0x0000E000                                      /*  Interrupt 13 Priority Mask */
#define NVIC_PRI3_INT12_M           0x000000E0                                      /*  Interrupt 12 Priority Mask */
#define NVIC_PRI3_INT15_S           29                                              /*  Interrupt 15 Priority Shift */
#define NVIC_PRI3_INT14_S           21                                              /*  Interrupt 14 Priority Shift */
#define NVIC_PRI3_INT13_S           13                                              /*  Interrupt 13 Priority Shift */
#define NVIC_PRI3_INT12_S           5                                               /*  Interrupt 12 Priority Shift */

    // Bit fields in the NVIC_PRI4 register                                             pp159
#define NVIC_PRI4_INT19_M           0xE0000000                                      /*  Interrupt 19 Priority Mask */
#define NVIC_PRI4_INT18_M           0x00E00000                                      /*  Interrupt 18 Priority Mask */
#define NVIC_PRI4_INT17_M           0x0000E000                                      /*  Interrupt 17 Priority Mask */
#define NVIC_PRI4_INT16_M           0x000000E0                                      /*  Interrupt 16 Priority Mask */
#define NVIC_PRI4_INT19_S           29                                              /*  Interrupt 19 Priority Shift */
#define NVIC_PRI4_INT18_S           21                                              /*  Interrupt 18 Priority Shift */
#define NVIC_PRI4_INT17_S           13                                              /*  Interrupt 17 Priority Shift */
#define NVIC_PRI4_INT16_S           5                                               /*  Interrupt 16 Priority Shift */

    // Bit fields in the NVIC_PRI5 register                                             pp159
#define NVIC_PRI5_INT23_M           0xE0000000                                      /*  Interrupt 23 Priority Mask */
#define NVIC_PRI5_INT22_M           0x00E00000                                      /*  Interrupt 22 Priority Mask */
#define NVIC_PRI5_INT21_M           0x0000E000                                      /*  Interrupt 21 Priority Mask */
#define NVIC_PRI5_INT20_M           0x000000E0                                      /*  Interrupt 20 Priority Mask */
#define NVIC_PRI5_INT23_S           29                                              /*  Interrupt 23 Priority Shift */
#define NVIC_PRI5_INT22_S           21                                              /*  Interrupt 22 Priority Shift */
#define NVIC_PRI5_INT21_S           13                                              /*  Interrupt 21 Priority Shift */
#define NVIC_PRI5_INT20_S           5                                               /*  Interrupt 20 Priority Shift */

    // Bit fields in the NVIC_PRI6 register                                             pp159
#define NVIC_PRI6_INT27_M           0xE0000000                                      /*  Interrupt 27 Priority Mask */
#define NVIC_PRI6_INT26_M           0x00E00000                                      /*  Interrupt 26 Priority Mask */
#define NVIC_PRI6_INT25_M           0x0000E000                                      /*  Interrupt 25 Priority Mask */
#define NVIC_PRI6_INT24_M           0x000000E0                                      /*  Interrupt 24 Priority Mask */
#define NVIC_PRI6_INT27_S           29                                              /*  Interrupt 27 Priority Shift */
#define NVIC_PRI6_INT26_S           21                                              /*  Interrupt 26 Priority Shift */
#define NVIC_PRI6_INT25_S           13                                              /*  Interrupt 25 Priority Shift */
#define NVIC_PRI6_INT24_S           5                                               /*  Interrupt 24 Priority Shift */

    // Bit fields in the NVIC_PRI7 register                                             pp159
#define NVIC_PRI7_INT31_M           0xE0000000                                      /*  Interrupt 31 Priority Mask */
#define NVIC_PRI7_INT30_M           0x00E00000                                      /*  Interrupt 30 Priority Mask */
#define NVIC_PRI7_INT29_M           0x0000E000                                      /*  Interrupt 29 Priority Mask */
#define NVIC_PRI7_INT28_M           0x000000E0                                      /*  Interrupt 28 Priority Mask */
#define NVIC_PRI7_INT31_S           29                                              /*  Interrupt 31 Priority Shift */
#define NVIC_PRI7_INT30_S           21                                              /*  Interrupt 30 Priority Shift */
#define NVIC_PRI7_INT29_S           13                                              /*  Interrupt 29 Priority Shift */
#define NVIC_PRI7_INT28_S           5                                               /*  Interrupt 28 Priority Shift */

    // Bit fields in the NVIC_PRI8 register                                             pp159
#define NVIC_PRI8_INT35_M           0xE0000000                                      /*  Interrupt 35 Priority Mask */
#define NVIC_PRI8_INT34_M           0x00E00000                                      /*  Interrupt 34 Priority Mask */
#define NVIC_PRI8_INT33_M           0x0000E000                                      /*  Interrupt 33 Priority Mask */
#define NVIC_PRI8_INT32_M           0x000000E0                                      /*  Interrupt 32 Priority Mask */
#define NVIC_PRI8_INT35_S           29                                              /*  Interrupt 35 Priority Shift */
#define NVIC_PRI8_INT34_S           21                                              /*  Interrupt 34 Priority Shift */
#define NVIC_PRI8_INT33_S           13                                              /*  Interrupt 33 Priority Shift */
#define NVIC_PRI8_INT32_S           5                                               /*  Interrupt 32 Priority Shift */

    // Bit fields in the NVIC_PRI9 register                                             pp159
#define NVIC_PRI9_INT39_M           0xE0000000                                      /*  Interrupt 39 Priority Mask */
#define NVIC_PRI9_INT38_M           0x00E00000                                      /*  Interrupt 38 Priority Mask */
#define NVIC_PRI9_INT37_M           0x0000E000                                      /*  Interrupt 37 Priority Mask */
#define NVIC_PRI9_INT36_M           0x000000E0                                      /*  Interrupt 36 Priority Mask */
#define NVIC_PRI9_INT39_S           29                                              /*  Interrupt 39 Priority Shift */
#define NVIC_PRI9_INT38_S           21                                              /*  Interrupt 38 Priority Shift */
#define NVIC_PRI9_INT37_S           13                                              /*  Interrupt 37 Priority Shift */
#define NVIC_PRI9_INT36_S           5                                               /*  Interrupt 36 Priority Shift */

    // Bit fields in the NVIC_PRI10 register                                            pp159
#define NVIC_PRI10_INT43_M          0xE0000000                                      /*  Interrupt 43 Priority Mask */
#define NVIC_PRI10_INT42_M          0x00E00000                                      /*  Interrupt 42 Priority Mask */
#define NVIC_PRI10_INT41_M          0x0000E000                                      /*  Interrupt 41 Priority Mask */
#define NVIC_PRI10_INT40_M          0x000000E0                                      /*  Interrupt 40 Priority Mask */
#define NVIC_PRI10_INT43_S          29                                              /*  Interrupt 43 Priority Shift */
#define NVIC_PRI10_INT42_S          21                                              /*  Interrupt 42 Priority Shift */
#define NVIC_PRI10_INT41_S          13                                              /*  Interrupt 41 Priority Shift */
#define NVIC_PRI10_INT40_S          5                                               /*  Interrupt 40 Priority Shift */

    // Bit fields in the NVIC_PRI11 register                                            pp159
#define NVIC_PRI11_INT47_M          0xE0000000                                      /*  Interrupt 47 Priority Mask */
#define NVIC_PRI11_INT46_M          0x00E00000                                      /*  Interrupt 46 Priority Mask */
#define NVIC_PRI11_INT45_M          0x0000E000                                      /*  Interrupt 45 Priority Mask */
#define NVIC_PRI11_INT44_M          0x000000E0                                      /*  Interrupt 44 Priority Mask */
#define NVIC_PRI11_INT47_S          29                                              /*  Interrupt 47 Priority Shift */
#define NVIC_PRI11_INT46_S          21                                              /*  Interrupt 46 Priority Shift */
#define NVIC_PRI11_INT45_S          13                                              /*  Interrupt 45 Priority Shift */
#define NVIC_PRI11_INT44_S          5                                               /*  Interrupt 44 Priority Shift */

    // Bit fields in the NVIC_PRI12 register                                            pp159
#define NVIC_PRI12_INT51_M          0xE0000000                                      /*  Interrupt 51 Priority Mask */
#define NVIC_PRI12_INT50_M          0x00E00000                                      /*  Interrupt 50 Priority Mask */
#define NVIC_PRI12_INT49_M          0x0000E000                                      /*  Interrupt 49 Priority Mask */
#define NVIC_PRI12_INT48_M          0x000000E0                                      /*  Interrupt 48 Priority Mask */
#define NVIC_PRI12_INT51_S          29                                              /*  Interrupt 51 Priority Shift */
#define NVIC_PRI12_INT50_S          21                                              /*  Interrupt 50 Priority Shift */
#define NVIC_PRI12_INT49_S          13                                              /*  Interrupt 49 Priority Shift */
#define NVIC_PRI12_INT48_S          5                                               /*  Interrupt 48 Priority Shift */

    // Bit fields in the NVIC_PRI13 register                                            pp159
#define NVIC_PRI13_INT55_M          0xE0000000                                      /*  Interrupt 55 Priority Mask */
#define NVIC_PRI13_INT54_M          0x00E00000                                      /*  Interrupt 54 Priority Mask */
#define NVIC_PRI13_INT53_M          0x0000E000                                      /*  Interrupt 53 Priority Mask */
#define NVIC_PRI13_INT52_M          0x000000E0                                      /*  Interrupt 52 Priority Mask */
#define NVIC_PRI13_INT55_S          29                                              /*  Interrupt 55 Priority Shift */
#define NVIC_PRI13_INT54_S          21                                              /*  Interrupt 54 Priority Shift */
#define NVIC_PRI13_INT53_S          13                                              /*  Interrupt 53 Priority Shift */
#define NVIC_PRI13_INT52_S          5                                               /*  Interrupt 52 Priority Shift */

    // Bit fields in the NVIC_PRI14 register                                            pp159
#define NVIC_PRI14_INTD_M           0xE0000000                                      /*  Interrupt 59 Priority Mask */
#define NVIC_PRI14_INTC_M           0x00E00000                                      /*  Interrupt 58 Priority Mask */
#define NVIC_PRI14_INTB_M           0x0000E000                                      /*  Interrupt 57 Priority Mask */
#define NVIC_PRI14_INTA_M           0x000000E0                                      /*  Interrupt 56 Priority Mask */
#define NVIC_PRI14_INTD_S           29                                              /*  Interrupt 59 Priority Shift */
#define NVIC_PRI14_INTC_S           21                                              /*  Interrupt 58 Priority Shift */
#define NVIC_PRI14_INTB_S           13                                              /*  Interrupt 57 Priority Shift */
#define NVIC_PRI14_INTA_S           5                                               /*  Interrupt 56 Priority Shift */

    // Bit fields in the NVIC_PRI15 register                                            pp159
#define NVIC_PRI15_INTD_M           0xE0000000                                      /*  Interrupt 63 Priority Mask */
#define NVIC_PRI15_INTC_M           0x00E00000                                      /*  Interrupt 62 Priority Mask */
#define NVIC_PRI15_INTB_M           0x0000E000                                      /*  Interrupt 61 Priority Mask */
#define NVIC_PRI15_INTA_M           0x000000E0                                      /*  Interrupt 60 Priority Mask */
#define NVIC_PRI15_INTD_S           29                                              /*  Interrupt 63 Priority Shift */
#define NVIC_PRI15_INTC_S           21                                              /*  Interrupt 62 Priority Shift */
#define NVIC_PRI15_INTB_S           13                                              /*  Interrupt 61 Priority Shift */
#define NVIC_PRI15_INTA_S           5                                               /*  Interrupt 60 Priority Shift */

    // Bit fields in the NVIC_PRI16 register                                            pp161
#define NVIC_PRI16_INTD_M           0xE0000000                                      /*  Interrupt 67 Priority Mask */
#define NVIC_PRI16_INTC_M           0x00E00000                                      /*  Interrupt 66 Priority Mask */
#define NVIC_PRI16_INTB_M           0x0000E000                                      /*  Interrupt 65 Priority Mask */
#define NVIC_PRI16_INTA_M           0x000000E0                                      /*  Interrupt 64 Priority Mask */
#define NVIC_PRI16_INTD_S           29                                              /*  Interrupt 67 Priority Shift */
#define NVIC_PRI16_INTC_S           21                                              /*  Interrupt 66 Priority Shift */
#define NVIC_PRI16_INTB_S           13                                              /*  Interrupt 65 Priority Shift */
#define NVIC_PRI16_INTA_S           5                                               /*  Interrupt 64 Priority Shift */

    // Bit fields in the NVIC_PRI17 register                                            pp161
#define NVIC_PRI17_INTD_M           0xE0000000                                      /*  Interrupt 71 Priority Mask */
#define NVIC_PRI17_INTC_M           0x00E00000                                      /*  Interrupt 70 Priority Mask */
#define NVIC_PRI17_INTB_M           0x0000E000                                      /*  Interrupt 69 Priority Mask */
#define NVIC_PRI17_INTA_M           0x000000E0                                      /*  Interrupt 68 Priority Mask */
#define NVIC_PRI17_INTD_S           29                                              /*  Interrupt 71 Priority Shift */
#define NVIC_PRI17_INTC_S           21                                              /*  Interrupt 70 Priority Shift */
#define NVIC_PRI17_INTB_S           13                                              /*  Interrupt 69 Priority Shift */
#define NVIC_PRI17_INTA_S           5                                               /*  Interrupt 68 Priority Shift */

    // Bit fields in the NVIC_PRI18 register                                            pp161
#define NVIC_PRI18_INTD_M           0xE0000000                                      /*  Interrupt 75 Priority Mask */
#define NVIC_PRI18_INTC_M           0x00E00000                                      /*  Interrupt 74 Priority Mask */
#define NVIC_PRI18_INTB_M           0x0000E000                                      /*  Interrupt 73 Priority Mask */
#define NVIC_PRI18_INTA_M           0x000000E0                                      /*  Interrupt 72 Priority Mask */
#define NVIC_PRI18_INTD_S           29                                              /*  Interrupt 75 Priority Shift */
#define NVIC_PRI18_INTC_S           21                                              /*  Interrupt 74 Priority Shift */
#define NVIC_PRI18_INTB_S           13                                              /*  Interrupt 73 Priority Shift */
#define NVIC_PRI18_INTA_S           5                                               /*  Interrupt 72 Priority Shift */

    // Bit fields in the NVIC_PRI19 register                                            pp161
#define NVIC_PRI19_INTD_M           0xE0000000                                      /*  Interrupt 79 Priority Mask */
#define NVIC_PRI19_INTC_M           0x00E00000                                      /*  Interrupt 78 Priority Mask */
#define NVIC_PRI19_INTB_M           0x0000E000                                      /*  Interrupt 77 Priority Mask */
#define NVIC_PRI19_INTA_M           0x000000E0                                      /*  Interrupt 76 Priority Mask */
#define NVIC_PRI19_INTD_S           29                                              /*  Interrupt 79 Priority Shift */
#define NVIC_PRI19_INTC_S           21                                              /*  Interrupt 78 Priority Shift */
#define NVIC_PRI19_INTB_S           13                                              /*  Interrupt 77 Priority Shift */
#define NVIC_PRI19_INTA_S           5                                               /*  Interrupt 76 Priority Shift */

    // Bit fields in the NVIC_PRI20 register                                            pp161
#define NVIC_PRI20_INTD_M           0xE0000000                                      /*  Interrupt 83 Priority Mask */
#define NVIC_PRI20_INTC_M           0x00E00000                                      /*  Interrupt 82 Priority Mask */
#define NVIC_PRI20_INTB_M           0x0000E000                                      /*  Interrupt 81 Priority Mask */
#define NVIC_PRI20_INTA_M           0x000000E0                                      /*  Interrupt 80 Priority Mask */
#define NVIC_PRI20_INTD_S           29                                              /*  Interrupt 83 Priority Shift */
#define NVIC_PRI20_INTC_S           21                                              /*  Interrupt 82 Priority Shift */
#define NVIC_PRI20_INTB_S           13                                              /*  Interrupt 81 Priority Shift */
#define NVIC_PRI20_INTA_S           5                                               /*  Interrupt 80 Priority Shift */

    // Bit fields in the NVIC_PRI21 register                                            pp161
#define NVIC_PRI21_INTD_M           0xE0000000                                      /*  Interrupt 87 Priority Mask */
#define NVIC_PRI21_INTC_M           0x00E00000                                      /*  Interrupt 86 Priority Mask */
#define NVIC_PRI21_INTB_M           0x0000E000                                      /*  Interrupt 85 Priority Mask */
#define NVIC_PRI21_INTA_M           0x000000E0                                      /*  Interrupt 84 Priority Mask */
#define NVIC_PRI21_INTD_S           29                                              /*  Interrupt 87 Priority Shift */
#define NVIC_PRI21_INTC_S           21                                              /*  Interrupt 86 Priority Shift */
#define NVIC_PRI21_INTB_S           13                                              /*  Interrupt 85 Priority Shift */
#define NVIC_PRI21_INTA_S           5                                               /*  Interrupt 84 Priority Shift */

    // Bit fields in the NVIC_PRI22 register                                            pp161
#define NVIC_PRI22_INTD_M           0xE0000000                                      /*  Interrupt 91 Priority Mask */
#define NVIC_PRI22_INTC_M           0x00E00000                                      /*  Interrupt 90 Priority Mask */
#define NVIC_PRI22_INTB_M           0x0000E000                                      /*  Interrupt 89 Priority Mask */
#define NVIC_PRI22_INTA_M           0x000000E0                                      /*  Interrupt 88 Priority Mask */
#define NVIC_PRI22_INTD_S           29                                              /*  Interrupt 91 Priority Shift */
#define NVIC_PRI22_INTC_S           21                                              /*  Interrupt 90 Priority Shift */
#define NVIC_PRI22_INTB_S           13                                              /*  Interrupt 89 Priority Shift */
#define NVIC_PRI22_INTA_S           5                                               /*  Interrupt 88 Priority Shift */

    // Bit fields in the NVIC_PRI23 register                                            pp161
#define NVIC_PRI23_INTD_M           0xE0000000                                      /*  Interrupt 95 Priority Mask */
#define NVIC_PRI23_INTC_M           0x00E00000                                      /*  Interrupt 94 Priority Mask */
#define NVIC_PRI23_INTB_M           0x0000E000                                      /*  Interrupt 93 Priority Mask */
#define NVIC_PRI23_INTA_M           0x000000E0                                      /*  Interrupt 92 Priority Mask */
#define NVIC_PRI23_INTD_S           29                                              /*  Interrupt 95 Priority Shift */
#define NVIC_PRI23_INTC_S           21                                              /*  Interrupt 94 Priority Shift */
#define NVIC_PRI23_INTB_S           13                                              /*  Interrupt 93 Priority Shift */
#define NVIC_PRI23_INTA_S           5                                               /*  Interrupt 92 Priority Shift */

    // Bit fields in the NVIC_PRI24 register                                            pp161
#define NVIC_PRI24_INTD_M           0xE0000000                                      /*  Interrupt 99 Priority Mask */
#define NVIC_PRI24_INTC_M           0x00E00000                                      /*  Interrupt 98 Priority Mask */
#define NVIC_PRI24_INTB_M           0x0000E000                                      /*  Interrupt 97 Priority Mask */
#define NVIC_PRI24_INTA_M           0x000000E0                                      /*  Interrupt 96 Priority Mask */
#define NVIC_PRI24_INTD_S           29                                              /*  Interrupt 99 Priority Shift */
#define NVIC_PRI24_INTC_S           21                                              /*  Interrupt 98 Priority Shift */
#define NVIC_PRI24_INTB_S           13                                              /*  Interrupt 97 Priority Shift */
#define NVIC_PRI24_INTA_S           5                                               /*  Interrupt 96 Priority Shift */

    // Bit fields in the NVIC_PRI25 register                                            pp161
#define NVIC_PRI25_INTD_M           0xE0000000                                      /*  Interrupt 103 Priority Mask */
#define NVIC_PRI25_INTC_M           0x00E00000                                      /*  Interrupt 102 Priority Mask */
#define NVIC_PRI25_INTB_M           0x0000E000                                      /*  Interrupt 101 Priority Mask */
#define NVIC_PRI25_INTA_M           0x000000E0                                      /*  Interrupt 100 Priority Mask */
#define NVIC_PRI25_INTD_S           29                                              /*  Interrupt 103 Priority Shift */
#define NVIC_PRI25_INTC_S           21                                              /*  Interrupt 102 Priority Shift */
#define NVIC_PRI25_INTB_S           13                                              /*  Interrupt 101 Priority Shift */
#define NVIC_PRI25_INTA_S           5                                               /*  Interrupt 100 Priority Shift */

    // Bit fields in the NVIC_PRI26 register                                            pp161
#define NVIC_PRI26_INTD_M           0xE0000000                                      /*  Interrupt 107 Priority Mask */
#define NVIC_PRI26_INTC_M           0x00E00000                                      /*  Interrupt 106 Priority Mask */
#define NVIC_PRI26_INTB_M           0x0000E000                                      /*  Interrupt 105 Priority Mask */
#define NVIC_PRI26_INTA_M           0x000000E0                                      /*  Interrupt 104 Priority Mask */
#define NVIC_PRI26_INTD_S           29                                              /*  Interrupt 107 Priority Shift */
#define NVIC_PRI26_INTC_S           21                                              /*  Interrupt 106 Priority Shift */
#define NVIC_PRI26_INTB_S           13                                              /*  Interrupt 105 Priority Shift */
#define NVIC_PRI26_INTA_S           5                                               /*  Interrupt 104 Priority Shift */

    // Bit fields in the NVIC_PRI27 register                                            pp161
#define NVIC_PRI27_INTD_M           0xE0000000                                      /*  Interrupt 111 Priority Mask */
#define NVIC_PRI27_INTC_M           0x00E00000                                      /*  Interrupt 110 Priority Mask */
#define NVIC_PRI27_INTB_M           0x0000E000                                      /*  Interrupt 109 Priority Mask */
#define NVIC_PRI27_INTA_M           0x000000E0                                      /*  Interrupt 108 Priority Mask */
#define NVIC_PRI27_INTD_S           29                                              /*  Interrupt 111 Priority Shift */
#define NVIC_PRI27_INTC_S           21                                              /*  Interrupt 110 Priority Shift */
#define NVIC_PRI27_INTB_S           13                                              /*  Interrupt 109 Priority Shift */
#define NVIC_PRI27_INTA_S           5                                               /*  Interrupt 108 Priority Shift */

    // Bit fields in the NVIC_PRI28 register                                            pp161
#define NVIC_PRI28_INTD_M           0xE0000000                                      /*  Interrupt 115 Priority Mask */
#define NVIC_PRI28_INTC_M           0x00E00000                                      /*  Interrupt 114 Priority Mask */
#define NVIC_PRI28_INTB_M           0x0000E000                                      /*  Interrupt 113 Priority Mask */
#define NVIC_PRI28_INTA_M           0x000000E0                                      /*  Interrupt 112 Priority Mask */
#define NVIC_PRI28_INTD_S           29                                              /*  Interrupt 115 Priority Shift */
#define NVIC_PRI28_INTC_S           21                                              /*  Interrupt 114 Priority Shift */
#define NVIC_PRI28_INTB_S           13                                              /*  Interrupt 113 Priority Shift */
#define NVIC_PRI28_INTA_S           5                                               /*  Interrupt 112 Priority Shift */
