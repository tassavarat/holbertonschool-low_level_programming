#include <stdio.h>

/**
 * main - For loop that prints out entire alphabet using putchar
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
