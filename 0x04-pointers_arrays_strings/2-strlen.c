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
