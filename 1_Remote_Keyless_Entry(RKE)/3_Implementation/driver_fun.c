//Startup file ,linker file and make file done by Y.Manjunadh
//main.c, driver_fun.c, driver_fun.h all the work done by Y.Manjunadh

//Start of Y.Manjunadh work
#include "driver_fun.h"

const int en1 = 1; // Keeps en1 constant throughout the program
const int en2 = 2; // Keeps en2 constant throughout the program
const int en3 = 3; // Keeps en3 constant throughout the program
const int en4 = 4; // Keeps en4 constant throughout the program
int x=0;

void my_delay(uint32_t time) // Provides Require Delay
{
	for (uint32_t i = 0; i < time * 100000; i++)
	{
		
		x++;
		
	}
}
void led_init_all(void) // LED Initialisation
{

	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830; // Initialising Reset Control Clock for GPIOD (0x40023800 + 0x30(offset))
	*pRccAhb1enr |= (1 << 3);						// enable GPIOD (GPIODEN)

	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00; // Initialinsing Register Boundary Adress of GPIOD 0x40020C00
	// Configuring as General purpose output mode
	*pGpiodModeReg |= (1 << (2 * LED_GREEN));  // setting MODER 12 as an output port
	*pGpiodModeReg |= (1 << (2 * LED_ORANGE)); // setting MODER 13 as an output port
	*pGpiodModeReg |= (1 << (2 * LED_RED));	   // setting MODER 14 as an output port
	*pGpiodModeReg |= (1 << (2 * LED_BLUE));   // setting MODER 15 as an output port

	led_off(LED_GREEN);	 // Green LED OFF
	led_off(LED_ORANGE); // Orange LED OFF
	led_off(LED_RED);	 // Red LED OFF
	led_off(LED_BLUE);	 // Blue LED OFF
}

void led_on(uint8_t led_no) // LED ON
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; // For Data output(GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg |= (1 << led_no);				  // Setting LED data pin to high
}

void led_off(uint8_t led_no) // LED OFF
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; // For Data Output (GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg &= ~(1 << led_no);				  // Settind LED ddata pin to low
}

void button_init(void)
{
	uint32_t *pRccAhb1enr1 = (uint32_t *)0x40023830; // Initialising Reset Control Clock for GPIOA (0x40023800 + 0x30(offset))
	*pRccAhb1enr1 |= (1 << 0);						 // enable GPIOA (GPIOAEN)

	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C; //(GPIOx_PUPDR) + 0x0C(offset) for Pull up and pull down
	*pGpioPuPdReg |= (1 << 1);						 // for setting pull down for A0
}

int button_count(void)
{
	button_init();
	int count = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; // Initialising dataregister for button((GPIOx_IDR) + 0x10(offset))
	int sec = 10000000;
	while (sec--)
	{
		if ((*pGpiodDataReg1) & (1 << BLUE_BUTTON))
		{ // check if the button is pressed or not
			my_delay(150);
			count++;

			if (count > 4)
				count = 0;
		}
	}
	return count; // Returns no of key presses
}

int encryption(int enc) // Helps in Data Encryption
{
	if (enc == en1)
		return 3+3;
	else if (enc == en2)
		return 5+5;
	else if (enc == en3)
		return 10+15;
	else if (enc == en4)
		return 20+14;
	return 0;
}

//End of Y.Manjunadh work