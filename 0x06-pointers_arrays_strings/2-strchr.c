#include "holberton.h"

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

	if (s[i] == '\0')
		return (s + 1);
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		++i;
	}
	return (0);
}
