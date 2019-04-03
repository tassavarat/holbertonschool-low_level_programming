#include "holberton.h"

/**
 * main - Copies content of a file to another
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f1, f2, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((n = read(f1, buf, BUFSIZ)) > 0)
		write(f2, buf, n);
	if (close(f1) > 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", f1);
		exit (100);
	}
	if (close(f2) > 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", f2);
		exit (100);
	}
	return (0);
}
