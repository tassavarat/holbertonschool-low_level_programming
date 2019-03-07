#include "holberton.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: String bytes to be copied
 *
 * Return: Pointer to concatenated string, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len1;
	unsigned int i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + i))
		++i;
	len1 = i;
	i = 0;
	while (*(s2 + i))
		++i;
	if (n >= i)
		n = i;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (!str)
		return (NULL);
	for (i = 0; *s1; ++i)
		*(str + i) = *(s1++);
	for (; i < len1 + n; ++i)
		*(str + i) = *(s2++);
	*(str + i) = '\0';
	return (str);
}
