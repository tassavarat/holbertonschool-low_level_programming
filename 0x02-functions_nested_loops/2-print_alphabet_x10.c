#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
