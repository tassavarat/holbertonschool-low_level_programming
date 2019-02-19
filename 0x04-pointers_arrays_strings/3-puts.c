#include "holberton.h"

/**
 * _puts - Prints string then newline to stdout
 * @str: String being printed
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));
	_putchar('\n');
}
