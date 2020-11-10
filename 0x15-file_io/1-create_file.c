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
	int fp, value, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	if (filename != NULL)
	{
		fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fp == -1)
			return (-1);
	}
		value = write(fp, text_content, i);
		if (value == -1)
			return (-1);
		/*{
		fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fp == -1)
			return (-1);
		value = write(fp, text_content, i);
		if (value == -1)
			return (-1);
	}
	if (filename == NULL)*/
	close(fp);
	return (1);
}
