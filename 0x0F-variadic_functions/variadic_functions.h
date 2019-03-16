#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* _VARIADIC_FUNCTIONS_H_ */
