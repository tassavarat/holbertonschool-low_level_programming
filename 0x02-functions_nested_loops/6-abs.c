#include "holberton.h"

/**
 * _abs - Prints out absolute value
 * @r: Number to be evaluated
 *
 * Return: Given value in absolute form
 */
int _abs(int r)
{
	if (r < 0)
		r *= -1;
	return (r);
}
