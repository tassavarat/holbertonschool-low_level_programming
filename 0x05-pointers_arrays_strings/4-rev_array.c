#include "holberton.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array being reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
