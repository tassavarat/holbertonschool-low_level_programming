#include <stdio.h>

/**
 * main - Prints 00-99 separating with , and space
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (j = 48; j < 58; j++)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(j);
			putchar(i);
			if (i + j != 114)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
