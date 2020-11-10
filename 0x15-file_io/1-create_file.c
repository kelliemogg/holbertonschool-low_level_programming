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
	int fp, value;

	fp = open(filename, O_CREAT | O_TRUNC | O_RDWR, 600);

	if (fp == -1)
		return (-1);

	else
		return (1);

	value = write(STDOUT_FILENO, text_content, 1024);
	if (value == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	close(fp);
	return (1);
}
