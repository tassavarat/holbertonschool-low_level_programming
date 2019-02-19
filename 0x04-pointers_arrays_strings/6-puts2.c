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
 * puts2 - Prints one char out of 2 of a string
 * @str: String being evaluated
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
