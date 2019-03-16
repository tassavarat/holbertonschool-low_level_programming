#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all parameters
 * @n: Number of parameters
 *
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	if (!n)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
