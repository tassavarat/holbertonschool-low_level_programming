#include "sort.h"

/**
 * shell_sort - Shell sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */
void shell_sort(int *array, size_t size)
{
	int tmp, swp;
	size_t i, j, gap;

	if (array)
	{
		for (gap = 1; gap * 3 + 1 < size; gap = gap * 3 + 1)
			;
		for (swp = 0; gap; gap = (gap - 1) / 3)
		{
			for (i = gap; i < size; ++i, array[j] = tmp)
				for (j = i, tmp = array[i]; j >= gap && array[j - gap] > tmp; j -= gap)
					if (array[j] != array[j - gap])
					{
						array[j] = array[j - gap];
						swp = 1;
					}
			if (swp)
				print_array(array, size);
		}
	}
}
