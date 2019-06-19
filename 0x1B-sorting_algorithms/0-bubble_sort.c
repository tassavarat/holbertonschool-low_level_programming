#include "sort.h"

/**
 * swapp - Swaps specified array elements then prints array
 * @array: Array to swap elements
 * @size: Size of array
 * @i: First index to swap
 * @j: Second index to swap
 */
void swapp(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[j];
	if (array[i] != array[j])
	{
		array[j] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}

/**
 * bubble_sort - Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sortperf;

	sortperf = 1;
	while (array && sortperf)
		for (i = 0, sortperf = 0; i + 1 < size && array[i + 1]; ++i)
		{
			if (array[i] > array[i + 1])
			{
				swapp(array, size, i, i + 1);
				sortperf = 1;
			}
		}
}
