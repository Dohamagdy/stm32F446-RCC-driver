#ifndef PRIVATE_H_
#define PRIVATE_H_

#define TIMEOUT 	500


typedef enum
{
	HSI,
	HSE,
	PLL
}
CLK_TYPE;

typedef enum
{
	OFF,
	ON
}
STATUS;
typedef enum
{
	PLLP=2,
	PLLR
}
SYS_CLK_MUX;

typedef struct
{
	uint8_t  PLL_R;
	uint8_t  PLL_Q;
	uint8_t  PLL_P;
	uint16_t PLL_N;
	uint8_t PLL_M;

}PLL_CONFIG;


typedef enum
{
	GPIOAEN,
	GPIOBEN,
	GPIOCEN,
	GPIODEN,
	GPIOEEN,
	GPIOFEN,
	GPIOGEN,
	GPIOHEN,
	CRCEN=12,
	BKPSRAMEN=18,
	DMA1EN=21,
	DMA2EN,
	OTGHSEN=29,
	OTGHSULPIEN
}RCC_AHB1_PERIPHERAL;

typedef enum
{
	DCMIEN=0,
	OTGFSEN=7
}RCC_AHB2_PERIPHERAL;

typedef enum
{
	FMCEN=0,
	QSPIEN
}RCC_AHB3_PERIPHERAL;

typedef enum
{
	TIM2EN,
	TIM3EN,
	TIM4EN,
	TIM5EN,
	TIM6EN,
	TIM7EN,
	TIM12EN,
	TIM13EN,
	TIM14EN,
	WWDGEN=11,
	SPI2EN=14,
	SPI3EN,
	SPDIFRXEN,
	USART2EN,
	USART3EN,
	UART4EN,
	UART5EN,
	I2C1EN,
	I2C2EN,
	I2C3EN,
	FMPI2C1EN,
	CAN1EN,
	CAN2EN,
	CECEN,
	PWREN,
	DACEN,
}RCC_APB1_PERIPHERAL;

typedef enum
{
	TIM1EN,
	TIM8EN,
	USART1EN=4,
	USART6EN,
	ADC1EN=8,
	ADC2EN,
	ADC3EN,
	SDIOEN,
	SPI1EN,
	SPI4EN,
	SYSCFGEN,
	TIM9EN=16,
	TIM10EN,
	TIM11EN,
	SAI1EN=22,
	SAI2EN
}RCC_APB2_PERIPHERAL;





#endif /* PRIVATE_H_ */
