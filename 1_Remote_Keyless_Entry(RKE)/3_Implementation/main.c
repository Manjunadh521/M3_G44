//Startup file ,linker file and make file done by Y.Manjunadh
//main.c, driver_fun.c, driver_fun.h all the work done by Y.Manjunadh

//Start of Y.Manjunadh work

#include "driver_fun.h"

static void ALLLED_ON(void);  // Switches ON all the LED's
static void ALLLED_OFF(void); // Switches OFF all the LED's
static void LEDCW_ON(void);	  // Switches ON LED'S in Clockwise Rotation
static void LEDACW_ON(void);  // Switches ON LED's in AntiClockwise Rotation

static void ALLLED_ON(void)   // Switches ON all the LED's
{
	led_on(LED_GREEN);
	led_on(LED_ORANGE);
	led_on(LED_RED);
	led_on(LED_BLUE);
}

static void ALLLED_OFF(void)  // Switches OFF all the LED's
{
	led_off(LED_GREEN);
	led_off(LED_ORANGE);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

static void LEDCW_ON(void)   // Switches ON LED'S in Clockwise Rotation
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

static void LEDACW_ON(void)   // Switches ON LED's in AntiClockwise Rotation

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
		int res;
		res = button_count();				 // Button count collected
		volatile int enc1 = encryption(res); // Encryption is Done
		if (enc1 == 6)
		{
			ALLLED_ON();
			res = 0;
		}
		else if (enc1 == 10)
		{
			ALLLED_OFF();
			res = 0;
		}
		else if (enc1 == 25)
		{
			LEDCW_ON();
			res = 0;
		}
		else if (enc1 == 34)
		{
			LEDACW_ON();
			res = 0;
		}
	}
}

//End of Y.Manjunadh work