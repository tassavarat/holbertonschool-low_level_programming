#include "sort.h"
/**
 * swap - swaps the array values
 * @array: the array to swap
 * @size: the size of the array
 * @i: the index of one value
 * @j: the index of the other value
 */
void swap(int *array, int size, int i, int j)
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
 * heapify - moves the largest value to the root
 * @arr: array
 * @size: size of array
 * @n: the node to trim
 * @i: the largest value found thus far
 */
void heapify(int arr[], int size, int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(arr, size, i, largest);
		heapify(arr, size, n, largest);
	}
}
/**
 * heap_sort - sorts an array via heap sort
 * @array: the array to sort
 * @size: the size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i;
	int n;

	if (array)
	{
		n = size;
		for (i = n / 2 - 1; i >= 0; i--)
		{
			heapify(array, size, n, i);
		}
		for (i = n - 1; i >= 0; i--)
		{
			swap(array, size, 0, i);
			heapify(array, size, i, 0);
		}
		i = 0;
		i++;
		i--;
	}
}
