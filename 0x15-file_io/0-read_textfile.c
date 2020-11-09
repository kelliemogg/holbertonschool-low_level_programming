#include "holberton.h"
#include <sys/fcntl.h>
#include <fcntl.h>
/**
 * read_textfile - read
 * description: reads a text file and prints to POSTIX std output
 * @filename: filename
 * @letters: numb of letters it should read and print
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int fd, count, value;

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
	close(fd);
	return (value);
}
