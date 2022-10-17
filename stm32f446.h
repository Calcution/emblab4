#ifndef _STM32F446_H_
#define _STM32F446_H_

#ifdef __cplusplus
    extern "C" {
#endif

/*!< Microcontroller Base Addresses */
#define FLASH_BASE                  ((uint32_t)0x08000000U)             /*!< FLASH base address in the alias region */
#define SRAM_BASE                   ((uint32_t)0x20000000U)             /*!< SRAM base address in the alias region */

/*!< AHB1 Peripherals */
#define RCC_REGISTER                    ((uint32_t)0x40023800U)
#define GPIOA_REGISTER		        ((uint32_t)0x40020000U)
#define GPIOB_REGISTER 		        ((uint32_t)0x40020400U)
#define GPIOC_REGISTER			((uint32_t)0x40020800U)
/*!< Register Memory Maps */
#define RCC                         ((RCC_TypeDef *)  RCC_REGISTER)
#define GPIOA                       ((GPIO_TypeDef *) GPIOA_REGISTER)
#define GPIOB			    ((GPIO_TypeDef *) GPIOB_REGISTER)
#define GPIOC			    ((GPIO_TypeDef *) GPIOC_REGISTER) 

/*!< RCC AHB1 Peripheral Clock Enable Register Bit Assignments */
#define RCC_AHB1ENR_GPIOA    		    0x00000001               /*!< GPIOA clock enable */
#define RCC_AHB1ENR_GPIOB		    0x00000002               /*!< GPIOB clock enable */
#define RCC_AHB1ENR_GPIOC		    0x00000004		     



/*32 bit sturcture*/
typedef union 
{
    uint32_t GPIO_TypeDef; 
    struct 
    {
    uint32_t bit0: 1;
    uint32_t bit1: 1;
    uint32_t bit2: 1;
    uint32_t bit3: 1;
    uint32_t bit4: 1;
    uint32_t bit5: 1;
    uint32_t bit6: 1;
    uint32_t bit7: 1;
    uint32_t bit8: 1;
    uint32_t bit9: 1;
    uint32_t bit10: 1;
    uint32_t bit11: 1;
    uint32_t bit12: 1;
    uint32_t bit13: 1;
    uint32_t bit14: 1;
    uint32_t bit15: 1;
    uint32_t bit16: 1;
    uint32_t bit17: 1;
    uint32_t bit18: 1;
    uint32_t bit19: 1;
    uint32_t bit20: 1;
    uint32_t bit21: 1;
    uint32_t bit22: 1;
    uint32_t bit23: 1;
    uint32_t bit24: 1;
    uint32_t bit25: 1;
    uint32_t bit26: 1;
    uint32_t bit27: 1;
    uint32_t bit28: 1;
    uint32_t bit29: 1;
    uint32_t bit30: 1;
    uint32_t bit31: 1;
    };
} reg32bit;

/*16 bit register*/
typedef union 
{
    uint32_t data; 
    struct 
    {
    uint32_t bit0: 1; 
    uint32_t bit1: 1; 
    uint32_t bit2: 1; 
    uint32_t bit3: 1; 
    uint32_t bit4: 1; 
    uint32_t bit5: 1; 
    uint32_t bit6: 1; 
    uint32_t bit7: 1; 
    uint32_t bit8: 1; 
    uint32_t bit9: 1; 
    uint32_t bit10: 1; 
    uint32_t bit11: 1;
    uint32_t bit12: 1;
    uint32_t bit13: 1;
    uint32_t bit14: 1;
    uint32_t bit15: 1;
    };
}reg16bit;

/*reg32 pin so 2 bit*/
typedef union 
{
    uint32_t data; 
    struct 
    {
    uint32_t pin0: 1;
    uint32_t pin1: 1;
    uint32_t pin2: 1;
    uint32_t pin3: 1;
    uint32_t pin4: 1;
    uint32_t pin5: 1;
    uint32_t pin6: 1;
    uint32_t pin7: 1;
    uint32_t pin8: 1;
    uint32_t pin9: 1;
    uint32_t pin10: 1;
    uint32_t pin11: 1;
    uint32_t pin12: 1;
    uint32_t pin13: 1;
    uint32_t pin14: 1;
    uint32_t pin15: 1;
    };
}reg32bit2;



typedef struct
{
    reg32bit MODER;        /*!< GPIO Port Mode Register,                   Address offset: 0x00 */
    reg32bit OTYPER;       /*!< GPIO Port Output Type Register,            Address offset: 0x04 */
    reg32bit OSPEEDR;      /*!< GPIO Port Output Speed Register,           Address offset: 0x08 */
    reg32bit PUPDR;        /*!< GPIO Port Pull-Up/Pull-Down Register,      Address offset: 0x0C */
    reg32bit IDR;          /*!< GPIO Port Input Data Register,             Address offset: 0x10 */
    reg32bit ODR;          /*!< GPIO Port Output Data Register,            Address offset: 0x14 */
    reg32bit BSRR;         /*!< GPIO Port Bit Set/Reset Register,          Address offset: 0x18 */
    reg32bit LCKR;         /*!< GPIO Port Configuration Lock Register,     Address offset: 0x1C */
    reg32bit AFRL;         /*!< GPIO Alternate Function Low Register,      Address offset: 0x20 */
    reg32bit AFRH;         /*!< GPIO Alternate Function High Register,     Address offset: 0x24 */
} GPIO_TypeDef;









typedef struct
{
    volatile uint32_t CR;           /*!< RCC Clock Control Register,                                  Address offset: 0x00 */
    volatile uint32_t PLLCFGR;      /*!< RCC PLL Configuration Register,                              Address offset: 0x04 */
    volatile uint32_t CFGR;         /*!< RCC Clock Configuration Register,                            Address offset: 0x08 */
    volatile uint32_t CIR;          /*!< RCC Clock Interrupt Register,                                Address offset: 0x0C */
    volatile uint32_t AHB1RSTR;     /*!< RCC AHB1 Peripheral Reset Register,                          Address offset: 0x10 */
    volatile uint32_t AHB2RSTR;     /*!< RCC AHB2 Peripheral Reset Register,                          Address offset: 0x14 */
    volatile uint32_t AHB3RSTR;     /*!< RCC AHB3 Peripheral Reset Register,                          Address offset: 0x18 */
             uint32_t RESERVED01;   /*!< Reserved,                                                    Address offset: 0x1C */
    volatile uint32_t APB1RSTR;     /*!< RCC APB1 Peripheral Reset Register,                          Address offset: 0x20 */
    volatile uint32_t APB2RSTR;     /*!< RCC APB2 Peripheral Reset Register,                          Address offset: 0x24 */
             uint32_t RESERVED02;   /*!< Reserved,                                                    Address offset: 0x28 */
             uint32_t RESERVED03;   /*!< Reserved,                                                    Address offset: 0x2C */
    volatile uint32_t AHB1ENR;      /*!< RCC AHB1 Peripheral Clock Enable Register,                   Address offset: 0x30 */
    volatile uint32_t AHB2ENR;      /*!< RCC AHB2 Peripheral Clock Enable Register,                   Address offset: 0x34 */
    volatile uint32_t AHB3ENR;      /*!< RCC AHB3 Peripheral Clock Enable Register,                   Address offset: 0x38 */
             uint32_t RESERVED04;   /*!< Reserved,                                                    Address offset: 0x3C */
    volatile uint32_t APB1ENR;      /*!< RCC APB1 Peripheral Clock Enable Register,                   Address offset: 0x40 */
    volatile uint32_t APB2ENR;      /*!< RCC APB2 Peripheral Clock Enable Register,                   Address offset: 0x44 */
             uint32_t RESERVED05;   /*!< Reserved,                                                    Address offset: 0x48 */
             uint32_t RESERVED06;   /*!< Reserved,                                                    Address offset: 0x4C */
    volatile uint32_t AHB1LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x50 */
    volatile uint32_t AHB2LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x54 */
    volatile uint32_t AHB3LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x58 */
             uint32_t RESERVED07;   /*!< Reserved,                                                    Address offset: 0x5C */
    volatile uint32_t APB1LPENR;    /*!< RCC APB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x60 */
    volatile uint32_t APB2LPENR;    /*!< RCC APB2 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x64 */
             uint32_t RESERVED08;   /*!< Reserved,                                                    Address offset: 0x68 */
             uint32_t RESERVED09;   /*!< Reserved,                                                    Address offset: 0x6C */
    volatile uint32_t BDCR;         /*!< RCC Backup Domain Control Register,                          Address offset: 0x70 */
    volatile uint32_t CSR;          /*!< RCC Clock Control & Status Register,                         Address offset: 0x74 */
             uint32_t RESERVED10;   /*!< Reserved,                                                    Address offset: 0x78 */
             uint32_t RESERVED11;   /*!< Reserved,                                                    Address offset: 0x7C */
    volatile uint32_t SSCGR;        /*!< RCC Spread Spectrum Clock Generation Register,               Address offset: 0x80 */
    volatile uint32_t PLLI2SCFGR;   /*!< RCC PLLI2S Configuration Register,                           Address offset: 0x84 */
    volatile uint32_t PLLSAICFGR;   /*!< RCC PLL Configuration Register,                              Address offset: 0x88 */
    volatile uint32_t DCKCFGR;      /*!< RCC Dedicated Clock Configuration Register,                  Address offset: 0x8C */
    volatile uint32_t CKGATENR;     /*!< RCC Clocks Gated Enable Register,                            Address offset: 0x90 */
    volatile uint32_t DCKCFGR2;     /*!< RCC Dedicated Clocks Configuration Register 2,               Address offset: 0x94 */   
} RCC_TypeDef;

#endif
