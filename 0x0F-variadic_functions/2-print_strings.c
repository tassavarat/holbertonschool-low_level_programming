#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to be printed between arguments
 * @n: Number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
