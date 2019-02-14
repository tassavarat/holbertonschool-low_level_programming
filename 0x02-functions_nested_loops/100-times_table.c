#include "holberton.h"

/**
 * print_times_table - Prints n-size times table, starting with 0
 * @n: Size of times table
 */
void print_times_table(int n)
{
	int row, col;

	if (n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col  = 0; col <= n; col++)
			{
				if (col	== 0)
				{
					_putchar('0');
				}
				else if (row * col < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(row * col + '0');
				}
				else if (row * col < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((row * col) / 10 + '0');
					_putchar((row * col) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((row * col) / 100 + '0');
					_putchar((row * col) % 100 / 10 + '0');
					_putchar((row * col) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
