#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			putchar((hour \ 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minutes \ 10) + '0');
			putchar((minutes % 10) + '0');
			putchar('\n');
		}

	}
}
