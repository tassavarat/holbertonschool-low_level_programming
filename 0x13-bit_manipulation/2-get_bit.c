#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Bit being evaluated
 * @index: Index, starting from 0 of the bit we want
 *
 * Return: Value of the bit at index
 * -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
