#include "function_pointers.h"

/**
 * main - Prints the opcodes of main function
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int byte, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < byte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
