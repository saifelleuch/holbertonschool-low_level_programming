#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rd, wr;
	char *str;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	rd = read(fd, str, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, str, rd);
	free(str);
	close(fd);

	if (wr != rd)
		return (0);

	return (rd);

}
