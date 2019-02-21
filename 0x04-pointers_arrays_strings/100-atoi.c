#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert string to int
 * @s: String being coverted
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int neg = 0;
	int num = 0;
	unsigned int conv = 0;

	while (s[i])
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			conv = conv * 10 + s[i] - '0';
			num = 1;
		}
		else if (num == 1 && (s[i] < '0' || s[i] > '9'))
			break;
		i++;
	}
	if (neg % 2 == 0)
		return (conv);
	else
		return (-conv);
}
