#include "main.h"
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: name of the file.
 * @text_content: text to be appended.
 * Return: 1 .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		return (1);

	w = write(fd, text_content, strlen(text_content));
	if (w < 0)
		return (0);
	close(fd);

	return (1);
}
