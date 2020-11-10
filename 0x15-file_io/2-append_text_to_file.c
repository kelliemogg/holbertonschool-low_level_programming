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
	char *ptr;
	ssize_t fd, count, value;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * text_content);
	if (ptr == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, ptr, text_content);
	if (count == -1)
		return (0);

	value = write(STDOUT_FILENO, ptr, count);
	if (value == -1)
		return (0);

	free(ptr);
	close(fd);
	return (value);
}
