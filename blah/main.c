#include "main.h"

int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOA;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOB;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOC;
	
	uint32_t  delay; 
	uint32_t  bdelay; 


        reg32bit portb;
	reg32bit portc; 
        reg32bit porta;

	
	
	/*Config INPUT gpioc pin )*/ 
        GPIOA->MODER.bit11 = 0;
	GPIOA->MODER.bit10 = 1;

        GPIOC->MODER.bit15 = 0;
	GPIOC->MODER.bit14 = 0;

        GPIOB->MODER.bit19 = 0;
	GPIOB->MODER.bit18 = 1;

        	

	/*Config PUSH PULL pin */ 
	GPIOA->OTYPER.bit5 = 0; 

	GPIOB->OTYPER.bit9 = 0; 

	GPIOC->OTYPER.bit7 = 0; 
      	
	/*Config pin  output speed*/ 
	GPIOA->OSPEEDR.bit11 = 0; 
	GPIOA->OSPEEDR.bit11 = 0; 

	GPIOC->OSPEEDR.bit15 = 0; 
	GPIOC->OSPEEDR.bit14 = 0; 
	
	GPIOB->OSPEEDR.bit19 = 0; 
	GPIOB->OSPEEDR.bit18 = 0; 
	
	/*Config pin pull up  pull down null */ 
	GPIOA->PUPDR.bit11 = 0;
	GPIOA->PUPDR.bit10 = 0;

	GPIOC->PUPDR.bit15 = 1;
	GPIOC->PUPDR.bit14 = 0;

	GPIOB->PUPDR.bit19 = 0;
	GPIOB->PUPDR.bit18 = 0;

		
    GPIOB->ODR.bit9 = 1;
    while(1)
    {
	delay = 1000000; 
	bdelay = 100000; 
	

	portc = GPIOC->IDR; 
	if(portc.bit7 == 1) 
	{
		while(bdelay--);
		if(portc.bit7 == 1) 
		{
			portb = GPIOB->IDR; 
			if(portb.bit9 == 0)
			{
				 GPIOB->ODR.bit9 = 1;
			}
			else
			{
				 GPIOB->ODR.bit9 = 0; 
			}
		}

			
	}

	porta = GPIOA->IDR;
	while(delay--);
        if ( porta.bit5 == 0 )
        {
            GPIOA->ODR.bit5 = 1; 
        } 
        else 
        {
            GPIOA->ODR.bit5 = 0; 
        }
    }
}
