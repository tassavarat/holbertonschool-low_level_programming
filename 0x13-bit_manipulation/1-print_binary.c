#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Integer
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int k;
	int print_on = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; --i)
	{
		k = n >> i;
		if (k & 1)
		{
			_putchar('1');
			print_on = 1;
		}
		else if (!(k & 1) && print_on)
			_putchar('0');
	}
}
