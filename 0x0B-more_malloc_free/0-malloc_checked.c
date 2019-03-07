#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of memory being allocated
 *
 * Return: Pointer to allocated memory, 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (!n)
		exit(98);
	return (n);
}
