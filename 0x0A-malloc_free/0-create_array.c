#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars then initialises
 * @size: Size of the memory
 * @c: Char to initialise with
 *
 * Return: Pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (!size)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	for (i = 0; i < size; ++i)
		str[i] = c;
	return (str);
}
