#include "holberton.h"

/**
 * test_root - Tests for maximum squares
 * @n: Number being evaluated
 * @i: Test values being iterated
 *
 * Return: Square root
 */
int test_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (test_root(n, i + 1));
}
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Number being evaluated
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (test_root(n, 1));
}
