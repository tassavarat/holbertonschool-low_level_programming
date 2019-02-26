#include "holberton.h"

/**
 * _strspn - Gets length of prefix substr
 * @s: String being evaluated
 * @accept: Bytes being compared
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
