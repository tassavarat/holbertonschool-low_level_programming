#include "holberton.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: Pointer to string
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion((s + 1)));
}
