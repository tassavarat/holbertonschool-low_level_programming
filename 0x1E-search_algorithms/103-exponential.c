#include "search_algos.h"

/**
 * _binary_search - Searches value in sorted array using Binary search
 * @array: Pointer to first element of array being searched
 * @l: Left boundry
 * @r: Right boundry
 * @value: Value being searched
 *
 * Return: Index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t i;

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

/**
 * exponential_search - Searches for value in sorted array using Exponential
 * @array: Pointer to  first element of array to search
 * @size: Number of elements in array
 * @value: Value being searched
 *
 * Return: First index where value found
 * -1 if value not found or NULL array
 *  Prints every time value in array compared to search value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	bound = 1;
	if (size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound < size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, bound);
		return (_binary_search(array, bound / 2, bound, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, size - 1);
		return (_binary_search(array, bound / 2, size - 1, value));
	}
}
