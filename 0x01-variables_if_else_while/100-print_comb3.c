#include <stdio.h>

/**
 * main - Prints 00-99 separating with , and space
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i == 0)
				i = j + 1;
			putchar(j + '0');
			putchar(i + '0');
			if (j == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
