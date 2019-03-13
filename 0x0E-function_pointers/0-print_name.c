#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to name being printed
 * @f: Pointer to function printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
