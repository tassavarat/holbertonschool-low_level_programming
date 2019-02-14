#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int count = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			count += i;
	printf("%i\n", count);
	return (0);
}
