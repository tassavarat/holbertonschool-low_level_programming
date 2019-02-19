#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array to be used
 * @n: Size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
