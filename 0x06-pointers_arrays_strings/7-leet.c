#include "holberton.h"

/**
 * leet - leetspeak
 * @str: variable
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;
	char array[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)

		for (j = 0; array[j] != '\0'; j++)

			if (str[i] == array[j])
				str[i] = leet[j];
	return (str);
}
