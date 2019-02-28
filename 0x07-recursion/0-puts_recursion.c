#include "holberton.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Pointer to string being evaluated
 */
void _puts_recursion(char *s)
{
	if (*(s))
	{
		_putchar(*(s));
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
