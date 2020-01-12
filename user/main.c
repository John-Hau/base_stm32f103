#include "stm32f10x.h"
#include <stdio.h>
#include "../user/led/bsp_led.h"

void delay(uint32_t n)
{
	while(n)
	{
	  __nop();
		n--;
	}
}
int main ( void )
{
	LED_GPIO_Config();
	
	
	
	
	
	while(1)
	{
		//LED1_TOGGLE();
		LED1(0);
		delay(1000000);
		LED1(1);
		delay(1000000);
	}

}
