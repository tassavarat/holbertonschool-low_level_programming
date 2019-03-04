#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0, 1 if non-digits are passed
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *endptr;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			sum += strtol(argv[i], &endptr, 10);
			if ((*endptr >= 'A' && *endptr <= 'Z')
				|| (*endptr >= 'a' && *endptr <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
