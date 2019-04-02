#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to address of text file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t b, c;
	char *buf = malloc(sizeof(char) * letters);

	if (fd == -1)
		return (0);
	if (!buf | !filename)
		return (0);
	b = read(fd, buf, letters);
	if (b == -1)
		return (0);
	buf[b] = '\0';
	c = write(STDOUT_FILENO, buf, b);
	if (c == -1)
		return (0);
	close(fd);
	free(buf);
	return (c);
}
