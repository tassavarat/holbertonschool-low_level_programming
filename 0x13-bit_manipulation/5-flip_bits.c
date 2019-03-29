#include "holberton.h"

/**
 * flip_bits - Number of bits flipped to get from one number to another
 * @n: First integer
 * @m: Second integer
 *
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			++i;
		n = n >> 1;
	}
	return (i);
}
