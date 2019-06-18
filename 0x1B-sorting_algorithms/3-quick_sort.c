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
 * partition - Partitions array based on pivot
 * @array: Array to sort
 * @size: Size of array
 * @lo: Start index
 * @hi: End index
 *
 * Return: Position of partition
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; ++j)
		if (array[j] < pivot)
		{
			++i;
			swapp(array, size, i, j);
		}
	++i;
	swapp(array, size, i, hi);
	return (i);
}

/**
 * quicksort - Recursion funtion
 * @array: Array to sway elements
 * @size: Size of array
 * @lo: Start index
 * @hi: End index
 */
void quicksort(int *array, size_t size, int lo, int hi)
{
	int p;

	if  (lo < hi)
	{
		p = partition(array, size, lo, hi);
		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
 * quick_sort - Quick sort algorithm
 * @array: Array to swap elements
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quicksort(array, size, 0, size - 1);
}
