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
		*(dest + i) = *(src + i);
	return (dest);
}
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to memory previously allocated
 * @old_size: Size, in bytes, of allocated space
 * @new_size: Size, in bytes, of new memory block
 *
 * Return: Reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (!ptr)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
