#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String being concatenated
 * @src: String being concatenated
 * @n: Number of bytes
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
