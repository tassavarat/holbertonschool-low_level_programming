#include "holberton.h"

/**
 * test_prime - Test for prime number
 * @n: Number being evaluated
 * @i: Test value being iterated
 *
 * Return: 1 if prime, 0 if not
 */
int test_prime(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i >= n / 2)
		return (1);
	else if (!(n % i))
		return (0);
	return (test_prime(n, i + 1));
}
/**
 * is_prime_number - Checks for prime number
 * @n: Number being evaluated
 *
 * Return: Results from test_prime
 */
int is_prime_number(int n)
{
	return (test_prime(n, 2));
}
