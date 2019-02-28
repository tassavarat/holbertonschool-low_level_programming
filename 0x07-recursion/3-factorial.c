#include "holberton.h"

/**
 * factorial - Returns factorial of number
 * @n: Number being evaluated
 *
 * Return: Factorial of number, -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (!n)
		return (1);
	return (n * factorial(n - 1));
}
