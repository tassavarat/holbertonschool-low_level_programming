#include "holberton.h"

/**
 * _isalpha - Checks if ASCII value falls within upper or lower
 * @c: ASCII value being checked
 *
 * Return: 1 if alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
