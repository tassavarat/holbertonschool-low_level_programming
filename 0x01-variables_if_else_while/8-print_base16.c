#include <stdio.h>

/**
 * main - Prints all numbers of base 16 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int alphabet;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
