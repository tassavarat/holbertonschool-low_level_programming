#include <stdio.h>

/**
 * main - Prints 00-99 separating with , and space
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
	int magic = 10;

	for (i = 0; i < 100; i++)
	{
		for (j = 1 + i; j < 100; j++)
		{
			putchar(i / magic + '0');
			putchar(i % magic + '0');
			putchar(' ');
			putchar(j / magic + '0');
			putchar(j % magic + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
