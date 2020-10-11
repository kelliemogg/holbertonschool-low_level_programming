#include "holberton.h"
/**
 * _atoi - string to int
 * description: transform a string to an int
 * @s: string
 * Return: Int
 */

int _atoi(char *s)
{
	int stnb;
	int ednb;
	int lennb;
	int res = 0;
	int coef = 1;
	int i = 0;
	int sign = 1;

	for (i = 0; !(s[i] >= '0' && s[i] <= '9') && s[i] I= '\0'; i++);
	stnb = i;

	for (; s[i] >= '0' && s[i] <= '9'; i++);
	ednb = i;

	for (i = 0; i < stnb; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}
	lennb = ednb - stnb;
	for (i = 1; i < lennb; i++)
		coef *= 10;
	for (i = 0; i < lennb; i++)
	{
		res += sign * (s[stnb + i] - '0') * coef;
		coef /= 10;
	}
	return (res);
}
