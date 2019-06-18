#include "sort.h"

/**
 * shell_sort - Shell sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */
void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, gap;

	if (array)
	{
		for (gap = 1; gap * 3 + 1 < size; gap = gap * 3 + 1)
			;
		for (; gap; gap = (gap - 1) / 3, print_array(array, size))
			for (i = gap; i < size; ++i, array[j] = tmp)
				for (j = i, tmp = array[i]; j >= gap && array[j - gap] > tmp; j -= gap)
					array[j] = array[j - gap];
	}
}
