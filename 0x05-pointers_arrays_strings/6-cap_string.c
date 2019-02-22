#include "holberton.h"

/**
 * cap_string - Capitalises all words of a string
 * @s: String being evaluated
 *
 * Return: Capitalised string
 */
char *cap_string(char *s)
{
	int i;
	int start = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			start = 1;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			start = 0;
		}
		else if (start == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ' ';
			start = 0;
		}
	}
	return (s);
}
