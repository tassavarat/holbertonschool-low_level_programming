#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - Copies a string
 * @dest: Array of size 98
 * @src: String being copied
 * @n: Length of string to be copied
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		printf("%i ", i);
	}
	printf("%i ", i);
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
