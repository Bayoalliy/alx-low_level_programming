#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a text file.
 * @filename: name of file to be crated.
 * @text_content: content of file created.
 * Return: 1 (succes).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rd;

	int sz;

	char *c = malloc((strlen(text_content) + 1) * sizeof(char));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR, 0700);
	if (fd == -1)
		return (0);

	sz = write(fd, text_content, strlen(text_content) + 1);
	if (sz < 0)
		return (0);
	rd = read(fd, c, strlen(text_content) + 1);
	if (rd < 0)
		return (0);

	sz = write(STDOUT_FILENO, c, rd);
	if (sz < 0)
		return (0);
	close(fd);

	return (1);
}




