#include "holberton.h"

/**
 * _isdigit - Checks for digit 0 through 9
 * @c: Value being evaluated
 *
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
