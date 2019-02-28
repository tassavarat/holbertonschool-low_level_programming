#include "holberton.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Pointer to string being evaluated
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		_putchar(*(s + i));
		_puts_recursion((s + ++i));
	}
	else
		_putchar('\n');
}
