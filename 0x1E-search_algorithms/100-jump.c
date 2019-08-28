#include "search_algos.h"

/**
 * min - Finds the numerically smaller number
 * @a: First value
 * @b: Second value
 *
 * Return: Smaller value
 */
size_t min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * jump_search - Searches value in sorted array using Jump search algorithm
 * @array: Pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value being searched
 *
 * Return: First index where value is located
 * -1 if value is not present or array is NULL
 *  Must use square root of array size for jump step
 *  Must print value on every comparison
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
	size_t i, j;

	jump = sqrt(size);
	i = 0;
	j = jump;
	do {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = j;
		j += sqrt(size);
		if (i >= size)
			break;
	} while (array[min(j, size) - 1] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	i -= jump;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		++i;
		if (i == min(j, size))
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
