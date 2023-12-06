/*
 * led_button.c
 *
 *  Created on: Nov 26, 2023
 *      Author: muhammed
 */

#include <stdint.h>
#include "stm32f407xx.h"

#define LOW 0
#define HIGH 1

void delay( void );

int main( void )
{
	GPIO_Handle_t extLED, extBtn;

	extLED.pGPIOx = GPIOA;
	extLED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	extLED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_10;
	extLED.GPIO_PinConfig.GPIO_Pin_O_Speed = GPIO_OSPEED_V_HIGH;
	extLED.GPIO_PinConfig.GPIO_Pin_O_Type = GPIO_OTYPE_PP;
	extLED.GPIO_PinConfig.GPIO_Pin_PUPD = GPIO_PIN_NO_PUPD;

	GPIO_PeriClkControl(extLED.pGPIOx, ENABLE);
	GPIO_Init(&extLED);

	extBtn.pGPIOx = GPIOB;
	extBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	extBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_12;
	extBtn.GPIO_PinConfig.GPIO_Pin_PUPD = GPIO_PIN_PU;

	GPIO_PeriClkControl(extBtn.pGPIOx, ENABLE);
	GPIO_Init(&extBtn);

	uint8_t btnState;

	while(1)
	{
		btnState = GPIO_ReadFromInputPin(extBtn.pGPIOx, GPIO_PIN_12);
		if( btnState == LOW )
		{
			GPIO_ToggleOutputPin(extLED.pGPIOx, GPIO_PIN_10);
			delay();
		}
	}


	return 0;
}

void delay( void )
{
	for( int i = 0; i < 500000; i++ );
}
