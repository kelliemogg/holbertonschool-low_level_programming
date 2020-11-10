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
	int fp, value, count;

	if (filename == NULL)
		return (-1);

	ptr = malloc(sizeof(char) * (*text_content));
	if (ptr == NULL)
		return (0);

	fp = open(filename, O_WRONLY);
	if (fp)
		return (1);

	count = read(fp, ptr, (*text_content));
	if (count == -1)
		return (-1);

	value = write(STDOUT_FILENO, ptr, count);
	if (value == -1)
		return (-1);

	free(ptr);
	close(fp);
	return (value);
}
