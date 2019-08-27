#include "search_algos.h"

/**
 * binary_search - Searches value in sorted array using Binary search
 * @array: Pointer to first element of array being searched
 * @size: Number of elements in array
 * @value: Value being searched
 *
 * Return: Index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	l = 0;
	r = size - 1;
	while (array && l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; ++i)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		i = (l + r) / 2;
		if (array[i] < value)
			l = i + 1;
		else if (array[i] > value)
			r = i - 1;
		else
			return (i);
	}
	return (-1);
}
