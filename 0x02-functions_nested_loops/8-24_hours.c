#include "holberton.h"

/**
 * jack_bauer - Prints 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;
	int dayDone = 0;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++, dayDone++)
		{
			if (dayDone == 1440)
				break;
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
