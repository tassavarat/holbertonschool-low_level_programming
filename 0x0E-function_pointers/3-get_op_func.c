#include "3-calc.h"

/**
 * get_op_func - Selects proper function to call
 * @s: Pointer to operator passed as argument
 *
 * Return: Proper function based on operator, otherwise NULL
 */
int (*get_op_func(char *s))(int n1, int n2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
