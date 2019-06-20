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
	if (array)
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
	int sorted[size], count[max = (range(array) + 1)];

	for (i = 0; i < max; ++i)
		count[i] = 0;
	for (i = 0; array[i]; ++i)
		++count[array[i]];
	for (i = 1; i < max; ++i)
		count[i] += count[i - 1];
	print_array(count, max);
	for (i = 0; array[i]; ++i)
	{
		sorted[count[array[i]] - 1] = array[i];
		--count[array[i]];
	}
	for (i = 0; array[i]; ++i)
		array[i] = sorted[i];
}
