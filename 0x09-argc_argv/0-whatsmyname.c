#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
