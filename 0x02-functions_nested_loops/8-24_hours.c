#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 *
 * Jack Bauer, starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
	}
}
