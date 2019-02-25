#include "holberton.h"

/**
 * _memset - Fills memory with constant byte
 * @s: Array being filled
 * @b: Constant byte
 * @n: Amount of array elements to be filled with b
 *
 * Return: Filled buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
