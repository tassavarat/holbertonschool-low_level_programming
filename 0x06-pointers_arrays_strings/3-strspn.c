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
	int i = 0;
	int j = 0;
	int tmp;

	while (s[i])
	{
		tmp = i;
		while (accept[j++])
		{
			if (s[i] == accept[j])
			{
				++i;
				break;
			}
		}
		j = 0;
		if (tmp == i++)
			break;
	}
	return (i);
}
