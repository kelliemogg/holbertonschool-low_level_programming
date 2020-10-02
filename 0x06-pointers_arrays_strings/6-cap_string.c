#include "holberton.h"

/**
 * cap_string - and away we go
 * description: capitalize
 * @str: variable
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;

	char arr[13];

	arr[0] = ',';
	arr[1] = ';';
	arr[2] = '.';
	arr[3] = '!';
	arr[4] = '?';
	arr[5] = '"';
	arr[6] = '(';
	arr[7] = ')';
	arr[8] = '{';
	arr[9] = '}';
	arr[10] = ' ';
	arr[11] = '\t';
	arr[12] = '\n';

	str[i] = (i == 0 && str[i] <= 'z' && str[i] >= 'a') ? str[i] - 32 : str[i];

	while (str[i])
	{
		while (j < 13)
		{
			if (str[i] == arr[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
				j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
