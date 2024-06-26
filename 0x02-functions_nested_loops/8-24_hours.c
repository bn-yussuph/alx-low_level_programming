#include "main.h"

/**
 * jack_bauer - a fxn to check if a char is in lower case or not
 *
 * Description: a function for lower case check
 *
 * Return: a 1 when lower and 0 otherwise
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
