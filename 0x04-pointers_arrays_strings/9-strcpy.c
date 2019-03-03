#include "holberton.h"

/**
 * _strcpy - Copies string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 *
 * Return: The value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i = 0;

	while (*s++)
		i++;
	len = i;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
