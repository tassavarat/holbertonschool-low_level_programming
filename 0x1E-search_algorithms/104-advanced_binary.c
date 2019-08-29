#include "search_algos.h"

/**
 * advanced_binary - Search for value in sorted array
 * @array: Pointer to first element of array
 * @size: Elements in array
 * @value: Value being searched for
 *
 * Return: Index where value found
 * -1 if value not found or NULL array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	if (size == 1)
		return (*array == value ? *array : -1);
	if (array[size / 2] < value)
		return (advanced_binary(array + (size / 2) + 1, size / 2, value));
	if (array[size / 2] == value)
		return (array[size / 2]);
	return (advanced_binary(array, size / 2, value));
}
/* size is n */
/* value is x */
