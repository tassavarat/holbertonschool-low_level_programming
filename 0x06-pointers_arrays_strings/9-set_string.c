#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer
 * @to: Pointer to a string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
