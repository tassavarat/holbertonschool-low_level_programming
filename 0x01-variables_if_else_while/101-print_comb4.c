#include <stdio.h>

/**
 * main - Prints 00-99 separating with , and space
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 9; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if (j == 0)
					j = k + 1;
				if (i == 0)
					i = j + 1;
				putchar(k + '0');
				putchar(j + '0');
				putchar(i + '0');
				if (k == 7)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
