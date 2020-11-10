#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create it
 * description: create file
 * @filename: filename
 * @text_content: text content
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	char *ptr;
	ssize_t fd, count, value;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, ptr, letters);
	if (count == -1)
		return (0);

	value = write(STDOUT_FILENO, ptr, count);
	if (value == -1)
		return (0);

	free(ptr);
	close(fd);
	return (value);
}
