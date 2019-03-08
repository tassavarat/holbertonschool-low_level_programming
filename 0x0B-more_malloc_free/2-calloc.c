#include "holberton.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Amount of bytes
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	str = malloc(size * nmemb);
		if (!str)
			return (NULL);
	for (i = 0; i < size * nmemb; ++i)
		*(str + i) = 0;
	return (str);
}
