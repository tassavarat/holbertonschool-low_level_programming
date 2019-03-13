#include "function_pointers.h"

/**
 * array_iterator - Executes function as parameter on each element of array
 * @array: Pointer to array
 * @size: Size of array
 * @action: Pointer to function code
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
		while (i < size)
			action(*(array + i++));
}
