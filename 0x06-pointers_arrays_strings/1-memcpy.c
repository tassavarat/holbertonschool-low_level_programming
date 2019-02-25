#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Area being copied to
 * @src: Area being copied
 * @n: Amount of bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		dest[i] = src[i];
	return (dest);
}
