#include "holberton.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *range, len;
	int i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	while (len--)
		*(range + i++) = min++;
	return (range);
}
