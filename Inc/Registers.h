/*
 * Registers.h
 *
 *  Created on: Mar 1, 2024
 *      Author: dell
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include<stdint.h>

////////////*RCC REGISTER*////////
/**********************************/
typedef struct
{
	union {
		uint32_t reg;
		struct
		{
			uint32_t HSION		:1;
			uint32_t HSIRDY		:1;
			uint32_t Res0		:1;
			uint32_t HSITRIM	:5;
			uint32_t HSICAL		:8;
			uint32_t HSEON		:1;
			uint32_t HSERDY		:1;
			uint32_t HSEBYP		:1;
			uint32_t CSSON		:1;
			uint32_t Res1		:4;
			uint32_t PLLON		:1;
			uint32_t PLLRDY		:1;
			uint32_t PLLI2SON	:1;
			uint32_t PLLI2SRDY	:1;
			uint32_t PLLSAION	:1;
			uint32_t PLLSAIRDY	:1;
			uint32_t Res2		:2;
		}BIT;
	}CR;

	union {
		uint32_t reg;
		struct
		{
			uint32_t PLLM		:6;
			uint32_t PLLN		:9;
			uint32_t Res0		:1;
			uint32_t PLLP		:2;
			uint32_t Res1		:4;
			uint32_t PLLSRC		:1;
			uint32_t Res2		:1;
			uint32_t PLLQ		:4;
			uint32_t PLLR		:3;
			uint32_t Res3		:1;
		}BIT;

	}PLLCFGR;

	union
	{
		uint32_t reg;
		struct{
			uint32_t SW			:2;
			uint32_t SWS		:2;
			uint32_t HPRE		:4;
			uint32_t Res0		:2;
			uint32_t PPRE1		:3;
			uint32_t PPRE2		:3;
			uint32_t RTCPPRE	:5;
			uint32_t MCO1		:2;
			uint32_t Res1		:1;
			uint32_t MCO1PRE	:3;
			uint32_t MCO2PRE	:3;
			uint32_t MCO2		:2;
		}BIT;

	}CFGR;
	union
	{
		uint32_t reg;
		struct
		{
			uint32_t LSIRDYF		:1;
			uint32_t LSERDYF		:1;
			uint32_t HSIRDYF		:1;
			uint32_t HSERDYF		:1;
			uint32_t PLLRDYF		:1;
			uint32_t PLLI2SRDYF		:1;
			uint32_t PLLSAIRDYF		:1;
			uint32_t CSSF			:1;
			uint32_t LSIRDYIE		:1;
			uint32_t LSERDYIE		:1;
			uint32_t HSIRDYIE		:1;
			uint32_t HSERDYIE		:1;
			uint32_t PLLRDYIE		:1;
			uint32_t PLLI2SRDYIE	:1;
			uint32_t PLLSAIRDYIE	:1;
			uint32_t Res0			:1;
			uint32_t LSIRDYC		:1;
			uint32_t LSERDYC		:1;
			uint32_t HSIRDYC		:1;
			uint32_t HSERDYC		:1;
			uint32_t PLLRDYC		:1;
			uint32_t PLLI2SRDYC		:1;
			uint32_t PLLSAIRDYC		:1;
			uint32_t CSSC			:1;
			uint32_t Res1			:8;
		}BIT;
	}CIR;

	union
	{
		uint32_t reg;
		struct{
			uint32_t GPIOARST		:1;
			uint32_t GPIOBRST		:1;
			uint32_t GPIOCRST		:1;
			uint32_t GPIODRST		:1;
			uint32_t GPIOERST		:1;
			uint32_t GPIOFRST		:1;
			uint32_t GPIOGRST		:1;
			uint32_t GPIOHRST		:1;
			uint32_t Res0			:4;
			uint32_t CRCRST			:1;
			uint32_t Res1			:8;
			uint32_t DMA1RST		:1;
			uint32_t DMA2RST		:1;
			uint32_t Res2			:6;
			uint32_t OTGHSRST		:1;
			uint32_t Res3			:2;
		}BIT;
	}AHB1RSTR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t DCMIRST		:1;
			uint32_t Res0			:6;
			uint32_t OTGFSRS		:1;
			uint32_t Res1			:24;
		}BIT;

	}AHB2RSTR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t FMCRST		:1;
			uint32_t QSPIRST	:1;
			uint32_t Res0		:30;
		}BIT;

	}AHB3RSTR;

	union
	{
		uint32_t reg;
	}Res0;


	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM2RST		:1;
			uint32_t TIM3RST		:1;
			uint32_t TIM4RST		:1;
			uint32_t TIM5RST		:1;
			uint32_t TIM6RST		:1;
			uint32_t TIM7RST		:1;
			uint32_t TIM12RST		:1;
			uint32_t TIM13RST		:1;
			uint32_t TIM14RST		:1;
			uint32_t Res0			:2;
			uint32_t WWDGRST		:1;
			uint32_t Res1			:2;
			uint32_t SPI2RST		:1;
			uint32_t SPI3RST		:1;
			uint32_t SPDIFRXRST		:1;
			uint32_t UART2RST		:1;
			uint32_t UART3RST		:1;
			uint32_t UART4ST		:1;
			uint32_t UART5RST		:1;
			uint32_t I2C1RST		:1;
			uint32_t I2C2RST		:1;
			uint32_t I2C3RST		:1;
			uint32_t FMPI2C1RST		:1;
			uint32_t CAN1RRST		:1;
			uint32_t CAN2RRST		:1;
			uint32_t CECRst			:1;
			uint32_t PWRRST			:1;
			uint32_t DACRRST		:1;
			uint32_t Res2			:2;
		}BIT;
	}APB1RSTR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM1RST		:1;
			uint32_t TIM8RST		:1;
			uint32_t Res0			:2;
			uint32_t USART1RST		:1;
			uint32_t USART6RST		:1;
			uint32_t Res1			:2;
			uint32_t ADCRST			:1;
			uint32_t Res2			:2;
			uint32_t SDIORST		:1;
			uint32_t SPI1RST		:1;
			uint32_t SP45RST		:1;
			uint32_t SYSCFGRST		:1;
			uint32_t Res3			:1;
			uint32_t TIM9RST		:1;
			uint32_t TIM10RST		:1;
			uint32_t TIM11RST		:1;
			uint32_t Res4			:3;
			uint32_t SAI1RST		:1;
			uint32_t SAI2RST		:1;
			uint32_t Res5			:8;

		}BIT;
	}APB2RSTR;

	union
	{
		uint32_t reg;
	}Res1;

	union
	{
		uint32_t reg;
	}Res2;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t GPIOAEN		:1;
			uint32_t GPIOBEN		:1;
			uint32_t GPIOCEN		:1;
			uint32_t GPIODEN		:1;
			uint32_t GPIOEEN		:1;
			uint32_t GPIOFEN		:1;
			uint32_t GPIOGEN		:1;
			uint32_t GPIOHEN		:1;
			uint32_t Res0			:4;
			uint32_t CRCEN			:1;
			uint32_t Res1			:5;
			uint32_t BKPSRAMEN		:1;
			uint32_t Res2			:2;
			uint32_t DMA1EN			:1;
			uint32_t DMA2EN			:1;
			uint32_t Res3			:6;
			uint32_t OTGHSEN		:1;
			uint32_t OTGHSULPIEN	:1;
			uint32_t Res4			:1;
		}BIT;
	}AHB1ENR;


	union
	{
		uint32_t reg;
		struct
		{
			uint32_t DCMIEN		:1;
			uint32_t Res0			:6;
			uint32_t OTGFSEN		:1;
			uint32_t Res1			:24;
		}BIT;

	}AHB2ENR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t FMCEN		:1;
			uint32_t QSPIEN		:1;
			uint32_t Res0		:30;
		}BIT;
	}AHB3ENR;

	union
	{
		uint32_t reg;
	}Res3;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM2EN		:1;
			uint32_t TIM3EN		:1;
			uint32_t TIM4EN		:1;
			uint32_t TIM5EN		:1;
			uint32_t TIM6EN		:1;
			uint32_t TIM7EN		:1;
			uint32_t TIM12EN	:1;
			uint32_t TIM13EN	:1;
			uint32_t TIM14EN	:1;
			uint32_t Res0		:2;
			uint32_t WWDGEN		:1;
			uint32_t Res1		:2;
			uint32_t SPI2EN		:1;
			uint32_t SPI3EN		:1;
			uint32_t SPDIFRXEN	:1;
			uint32_t USART2EN	:1;
			uint32_t USART3EN	:1;
			uint32_t UART4EN	:1;
			uint32_t UART5EN	:1;
			uint32_t I2C1EN		:1;
			uint32_t I2C2EN		:1;
			uint32_t I2C3EN		:1;
			uint32_t FMPI2C1EN	:1;
			uint32_t CAN1EN		:1;
			uint32_t CAN2EN		:1;
			uint32_t CECEN		:1;
			uint32_t PWREN		:1;
			uint32_t DACEN		:1;
			uint32_t Res2		:2;
		}BIT;
	}APB1ENR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM1EN		:1;
			uint32_t TIM8EN		:1;
			uint32_t Res0		:2;
			uint32_t USART1EN	:1;
			uint32_t USART6EN	:1;
			uint32_t Res1		:2;
			uint32_t ADC1EN		:1;
			uint32_t ADC2EN		:1;
			uint32_t ADC3EN		:1;
			uint32_t SDIOEN		:1;
			uint32_t SPI1EN		:1;
			uint32_t SPI4EN		:1;
			uint32_t SYSCFGEN	:1;
			uint32_t Res2		:1;
			uint32_t TIM9EN		:1;
			uint32_t TIM10EN	:1;
			uint32_t TIM11EN	:1;
			uint32_t Res3		:3;
			uint32_t SAI1EN		:1;
			uint32_t SAI2EN		:1;
			uint32_t Res4		:7;
		}BIT;
	}APB2ENR;

	union
	{
		uint32_t reg;
	}Res4;

	union
	{
		uint32_t reg;
	}Res5;

	/*****************************/



	union
	{
		uint32_t reg;
		struct
		{
			uint32_t GPIOALPEN			:1;
			uint32_t GPIOBLPEN			:1;
			uint32_t GPIOCLPEN			:1;
			uint32_t GPIODLPEN			:1;
			uint32_t GPIOELPEN			:1;
			uint32_t GPIOFLPEN			:1;
			uint32_t GPIOGLPEN			:1;
			uint32_t GPIOHLPEN			:1;
			uint32_t Res0				:4;
			uint32_t CRCLPEN			:1;
			uint32_t Res1				:2;
			uint32_t FLITFLPEN			:1;
			uint32_t SRAM1LPEN			:1;
			uint32_t SRAM2LPEN			:1;
			uint32_t BKPSRAMLPEN		:1;
			uint32_t Res2				:2;
			uint32_t DMA1LPEN			:1;
			uint32_t DMA2LPEN			:1;
			uint32_t Res3				:6;
			uint32_t OTGHSLPEN			:1;
			uint32_t OTGHSULPILPEN		:1;
			uint32_t Res4				:1;
		}BIT;

	}AHB1LPENR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t DCMILPEN		:1;
			uint32_t Res0			:6;
			uint32_t OTGFSLPEN		:1;
			uint32_t Res1			:24;

		}BIT;

	}AHB2LPENR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t FMCLPEN		:1;
			uint32_t QSPILPEN		:1;
			uint32_t Res0			:30;

		}BIT;

	}AHB3LPENR;

	union
	{
		uint32_t reg;
	}Res6;
	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM2LPEN		:1;
			uint32_t TIM3LPEN		:1;
			uint32_t TIM4LPEN		:1;
			uint32_t TIM5LPEN		:1;
			uint32_t TIM6LPEN		:1;
			uint32_t TIM7LPEN		:1;
			uint32_t TIM12LPEN		:1;
			uint32_t TIM13LPEN		:1;
			uint32_t TIM14LPEN		:1;
			uint32_t Res			:2;
			uint32_t WWDGLPEN		:1;
			uint32_t Res1			:2;
			uint32_t SPI2LPEN		:1;
			uint32_t SPI3LPEN		:1;
			uint32_t SPDIFRXLPEN	:1;
			uint32_t USART2LPEN		:1;
			uint32_t USART3LPEN		:1;
			uint32_t UART4LPEN		:1;
			uint32_t UART5LPEN		:1;
			uint32_t I2C1LPEN		:1;
			uint32_t I2C2LPEN		:1;
			uint32_t I2C3LPEN		:1;
			uint32_t FMPI2C1LPEN	:1;
			uint32_t CAN1LPEN		:1;
			uint32_t CAN2LPEN		:1;
			uint32_t CECLPEN		:1;
			uint32_t PWRLPEN		:1;
			uint32_t DACLPEN		:1;
			uint32_t Res2			:2;
		}BIT;

	}APB1LPENR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t TIM1LPEN            : 1 ;
			uint32_t TIM8LPEN            : 1 ;
			uint32_t Res0                : 2 ;
			uint32_t USART1LPEN          : 1 ;
			uint32_t USART6LPEN          : 1 ;
			uint32_t Res1                : 2 ;
			uint32_t ADC1LPEN            : 1 ;
			uint32_t ADC2LPEN            : 1 ;
			uint32_t ADC3LPEN            : 1 ;
			uint32_t SDIOLPEN            : 1 ;
			uint32_t SPI1LPEN            : 1 ;
			uint32_t SPI4LPEN            : 1 ;
			uint32_t SYSCFGLPEN          : 1 ;
			uint32_t Res2                : 1 ;
			uint32_t TIM9LPEN            : 1 ;
			uint32_t TIM10LPEN           : 1 ;
			uint32_t TIM11LPEN           : 1 ;
			uint32_t Res3                : 3 ;
			uint32_t SAI1LPEN            : 1 ;
			uint32_t SAI2LPEN            : 1 ;
			uint32_t Res                 : 8 ;
		}BIT;
	}APB2LPENR;

	union
	{
		uint32_t reg;
	}Res7;

	union
	{
		uint32_t reg;
	}Res8;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t LSEON		: 1;
			uint32_t LSERDY		: 1;
			uint32_t LSEBYP		: 1;
			uint32_t LSEMOD		: 1;
			uint32_t Res0		: 4;
			uint32_t RTCSEL0	: 1;
			uint32_t RTCSEL1	: 1;
			uint32_t Res1		: 5;
			uint32_t RTCEN		: 1;
			uint32_t BDRST		: 1;
			uint32_t Res		:15;

		}BIT;

	}BDCR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t LSION		: 1;
			uint32_t LSIRDY		: 1;
			uint32_t Res		: 22;
			uint32_t RMVF		: 1;
			uint32_t BORRSTF	: 1;
			uint32_t PADRSTF	: 1;
			uint32_t PORRSTF	: 1;
			uint32_t SFTRSTF	: 1;
			uint32_t WDGRSTF	: 1;
			uint32_t WWDGRSTF	: 1;
			uint32_t LPWRRSTF	: 1;

		}BIT;
	}CSR;
	union
	{
		uint32_t reg;
	}Res9;
	union
	{
		uint32_t reg;
	}Res10;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t MODPER			: 13;
			uint32_t INCSTEP		: 15;
			uint32_t Res			: 2;
			uint32_t SPREADSEL		: 1;
			uint32_t SSCGEN			: 1;
		}BIT;

	}CGR;

	union
	{
		uint32_t reg;
		struct
		{
			uint32_t PLLI2SM	: 6;    // PLLI2S division factor for main system clock
			uint32_t PLLI2SN	: 9;    // PLLI2S multiplication factor for VCO
			uint32_t Res0		: 1;
			uint32_t PLLI2SP	: 2;
			uint32_t Res1		: 6;
			uint32_t PLLI2SQ	: 4;    // PLLI2S division factor for SAI clock
			uint32_t PLLI2SR	: 3;    // PLLI2S division factor for I2S clock
			uint32_t Res2		: 1;
		}BIT;
	}PLLLI2SCFGR;

	/*union
	{
		uint32_t reg;
		struct
		{
		}BIT;
	};
	union
	{
		uint32_t reg;
		struct
		{
		}BIT;
	};
	union
	{
		uint32_t reg;
		struct
		{
		}BIT;
	};
	union
	{
		uint32_t reg;
		struct
		{
		}BIT;
	};
	union
	{
		uint32_t reg;
		struct
		{
		}BIT;
	};

*/
}RCC_REG;

#define RCC  ((volatile RCC_REG*)0x40023800)

///////////*********/////////////





#endif /* REGISTERS_H_ */
