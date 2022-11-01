#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and print it to the standard output.
 * @filename: file to be read from.
 * @letters: numbers of letters it should read and print.
 * Return: the actual number of letters it could print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;

	int sz;

	char *c = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_EXCL | O_RDONLY, 0700);
	if (fd == -1)
		return (0);

	rd = read(fd, c, letters);
	if (rd < 0)
		return (0);

	sz = write(STDOUT_FILENO, c, rd);
	if (sz < 0)
		return (0);
	close(fd);

	return (rd);
}




