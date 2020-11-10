#include "holberton.h"
#include <sys/fcntl.h>
#include <fcntl.h>
/**
 * append_text_to_file - read
 * description: reads a text file and prints to POSTIX std output
 * @filename: filename
 * @text_content: numb of letters it should read and print
 * Return: number of letters or 0
 */

int append_text_to_file(const char *filename, char *text_content)
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

	close(fp);
	return (1);
}
