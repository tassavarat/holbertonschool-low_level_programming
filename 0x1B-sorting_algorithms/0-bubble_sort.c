#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sortperf, val;

	sortperf = 1;
	val = 0;
	while (array && sortperf)
		for (i = 0, sortperf = 0; i < size; ++i)
			if (array[i + 1] && array[i] > array[i + 1])
			{
				val = array[i];
				array[i] = array[i + 1];
				array[i + 1] = val;
				print_array(array, size);
				sortperf = 1;
			}
}
