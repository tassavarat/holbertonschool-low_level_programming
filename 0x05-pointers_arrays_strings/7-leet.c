#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @s: String being converted
 *
 * Return: Converted string
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "AaEeOoTtLl";
	char number[] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; letter[j]; j++)
			if (letter[j] == s[i])
				s[i] = number[j];
	return (s);
}
