#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
