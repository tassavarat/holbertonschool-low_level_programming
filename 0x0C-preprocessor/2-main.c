#include <stdio.h>

/**
 * main - Prints the name of file compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
