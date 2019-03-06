#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns pointer to newly allocated space which contains a string
 * @str: String to be copied
 *
 * Return: Pointer to new string identical to str, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int len;

	while (*(str + i))
		++i;
	len = i;
	if (!str)
		return (NULL);
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	for (i = 0; i <= len; ++i)
		*(s + i) = *(str + i);
	return (s);
}
