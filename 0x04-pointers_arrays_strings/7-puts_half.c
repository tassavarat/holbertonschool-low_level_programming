#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: Variable being evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 * puts_half - Prints half of string
 * @str: String being evaluated
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	if (len % 2 != 0)
		len += 1;
	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
