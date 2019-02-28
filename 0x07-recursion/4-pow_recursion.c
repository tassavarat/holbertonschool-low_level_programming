#include "holberton.h"

/**
 * _pow_recursion - Returns value x raised to power y
 * @x: Number being raised
 * @y: Power to raise to
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
