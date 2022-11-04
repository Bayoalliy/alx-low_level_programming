#include "main.h"


/**
 * error_check - check for possible error.
 * @fd: file descriptor.
 * @file_name: name of affected file.
 */

void error_check(int fd, char *file_name)
{
	if (fd == 3)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
	else
	{
		dprintf(2, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
}



/**
 * copy - copy content of a file to another.
 * @file_from: file 1.
 * @file_to: file 2.
 * Return: void.
 */
void copy(char *file_from, char *file_to)
{
	int fd1, fd2, r, w;

	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
		error_check(fd1, file_from);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 < 0)
		error_check(fd2, file_to);

	do {
		r = read(fd1, buf, 1024);
		if (r < 0)
			error_check(fd1, file_from);
		w = write(fd2, buf, r);
		if (w < 0)
			error_check(fd2, file_to);
	} while (r == 1024);

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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(ag[1], ag[2]);

	return (0);
}
