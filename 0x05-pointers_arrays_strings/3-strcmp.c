#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string being evaluated
 * @s2: Second string being evaluated
 *
 * Return: Difference between string characters being evaluated
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
