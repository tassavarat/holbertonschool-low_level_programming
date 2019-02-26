#include "holberton.h"

/**
 * _strstr - Locates a substring
 * @haystack: String being searched
 * @needle: Substring being searched for
 *
 * Return: Pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[i] == needle[j]; ++i, ++j)
				;
			if (needle[j] == '\0')
				return (haystack + i - j);
		}
	}
	return (0);
}
