#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 * @c: ASCII value being checked
 *
 * Return: 1 if lower, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
