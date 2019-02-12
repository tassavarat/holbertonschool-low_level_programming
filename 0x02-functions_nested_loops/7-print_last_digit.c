#include "holberton.h"

/**
 * print_last_digit - Print last digit of numbers
 * @r: Value being evaluated
 *
 * Return: Last digit
 */
int print_last_digit(int r)
{
	r %= 10;
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}
