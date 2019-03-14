#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Pointer to function code
 *
 * Return: Index of first match, -1 if size <=0 or no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; ++i)
			if (cmp(*(array + i)))
				return (i);
	}
	return (-1);
}
