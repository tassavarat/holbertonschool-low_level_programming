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
 * selection_sort - Selection sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t si, i;
	int min, min_pos, min_update;

	min_update = 0;
	if (array)
	{
		min = array[0];
		for (si = 0; si < size; ++si, min = array[si], min_update = 0)
		{
			for (i = si; i < size; ++i)
				if (min > array[i])
				{
					min = array[i];
					min_pos = i;
					min_update = 1;
				}
			if (min_update)
				swapp(array, size, si, min_pos);
		}
	}
}
