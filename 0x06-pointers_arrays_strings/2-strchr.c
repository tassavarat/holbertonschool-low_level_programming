#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String being evaluated
 * @c: Character being checked for
 *
 * Return: Pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
