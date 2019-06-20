#include "sort.h"

/**
 * range - Finds maximum value in array
 * @array: Array to evaluate
 *
 * Return: Max value
 */
int range(int *array)
{
	int i, max;

	max = 0;
	for (i = 0; array[i]; ++i)
		if (max < array[i])
			max = array[i];
	return (max);
}

/**
 * counting_sort - Counting sort algorithm
 * @array: Pointer to array to sort
 * @size: Size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i, max;
	int *sorted, *count;

	if (array && size > 1)
	{
		sorted  = malloc(sizeof(int) * size);
		count = calloc(max = range(array) + 1, sizeof(int));
		for (i = 0; i < size; ++i)
			++count[array[i]];
		for (i = 1; i < max; ++i)
			count[i] += count[i - 1];
		print_array(count, max);
		for (i = 0; i < size; ++i)
		{
			sorted[count[array[i]] - 1] = array[i];
			--count[array[i]];
		}
		for (i = 0; i < size; ++i)
			array[i] = sorted[i];
		free(sorted);
		free(count);
	}
}
