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
		return (-1);

	ptr = malloc(sizeof(char) * (*text_content));
	if (ptr == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	count = read(fd, ptr, text_content);
	if (count == -1)
		return (-1);

	value = write(STDOUT_FILENO, ptr, count);
	if (value == -1)
		return (-1);

	free(ptr);
	close(fd);
	return (value);
}
