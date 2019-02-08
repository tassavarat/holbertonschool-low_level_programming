#include <stdio.h>

/**
 * main - Prints 0-9 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
