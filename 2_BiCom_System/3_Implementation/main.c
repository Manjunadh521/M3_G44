//Startup file ,linker file and make file done by Y.Manjunadh
//main.c, driver_fun.c, driver_fun.h work done by A.Manoj sai with the help of Y.Manjunadh

//Start of A.Manoj Sai work done with the help of Y.Manjunadh
#include "driver_fun.h"

static void ALLLED_ON1(void);  // Switches ON all the LED's
static void ALLLED_OFF1(void); // Switches OFF all the LED's
static void LEDCW_ON1(void);	  // Switches ON LED'S in Clockwise Rotation
static void LEDACW_ON1(void);  // Switches ON LED's in AntiClockwise Rotation

static void ALLLED_ON1(void)   // Switches ON all the LED's
{
	led_on(LED_GREEN);
	led_on(LED_ORANGE);
	led_on(LED_RED);
	led_on(LED_BLUE);
}

static void ALLLED_OFF1(void)  // Switches OFF all the LED's
{
	led_off(LED_GREEN);
	led_off(LED_ORANGE);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

static void LEDCW_ON1(void)   // Switches ON LED'S in Clockwise Rotation
{
	led_on(LED_GREEN);
	my_delay(350);
	led_off(LED_GREEN);
	my_delay(350);
	led_on(LED_ORANGE);
	my_delay(350);
	led_off(LED_ORANGE);
	my_delay(350);
	led_on(LED_RED);
	my_delay(350);
	led_off(LED_RED);
	my_delay(350);
	led_on(LED_BLUE);
	my_delay(350);
	led_off(LED_BLUE);
}

static void LEDACW_ON1(void)   // Switches ON LED's in AntiClockwise Rotation

{
	led_on(LED_GREEN);
	my_delay(350);
	led_off(LED_GREEN);
	my_delay(350);
	led_on(LED_BLUE);
	my_delay(350);
	led_off(LED_BLUE);
	my_delay(350);
	led_on(LED_RED);
	my_delay(350);
	led_off(LED_RED);
	my_delay(350);
	led_on(LED_ORANGE);
	my_delay(350);
	led_off(LED_ORANGE);
}

int main(void)
{

	led_init_all(); // LED Initialisation
	button_init();	// Butoon Initialiasation
	while (1)
	{
		//int res;
		volatile int res = button_count();				 // Button count collected
		if (res == 1)                        //Activate buttons count according to function
		{
			ALLLED_ON1();
			res = 0;
		}
		else if (res == 2)
		{
			ALLLED_OFF1();
			res = 0;
		}
		else if (res == 3)
		{
			LEDCW_ON1();
			res = 0;
		}
		else if (res == 4)
		{
			LEDACW_ON1();
			res = 0;
		}
	}
}

//End of of A.Manoj Sai work done with the help of Y.Manjunadh