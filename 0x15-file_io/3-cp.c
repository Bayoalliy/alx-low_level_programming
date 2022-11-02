#include "main.h"


/**
 * copy - copy content of a file to another.
 * @file_from: file 1.
 * @file_to: file 2.
 * Return: void.
 */

void copy(char *file_from, char *file_to)
{
	int fd1, fd2, r, w;

	char *buf = malloc(1024);

	fd1 = open(file_from, O_RDWR);
	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);

	r = read(fd1, buf, 1024);

	if (fd1 < 0 || r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	w = write(fd2, buf, 1024);
	if (fd2 < 0 || w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}



/**
 * main - Entry point.
 * Return: Always 0.
 *
 * @ac: argument cout.
 * @ag: argument list.
 */
int main(int ac, char **ag)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	copy(ag[1], ag[2]);

	return (0);
}
