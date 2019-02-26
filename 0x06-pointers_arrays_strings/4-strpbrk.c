#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String being evaluated
 * @accept: Bytes being searched for
 *
 * Return: Pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
