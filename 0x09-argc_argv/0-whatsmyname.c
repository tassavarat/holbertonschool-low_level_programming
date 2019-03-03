#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc:
 * @argv
 *
 * Return:
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
