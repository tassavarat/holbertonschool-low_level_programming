#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Bit being evaluated
 * @index: Index, starting from 0 of the bit we want
 *
 * Return: 1 on success
 * -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if
	{
		*n = *n | 1 << index;
		return (1);
	}
}
