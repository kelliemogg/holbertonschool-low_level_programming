#include "holberton.h"

/**
* print_last_digit - integer
* description: print last digit
* @n: variable
* Return: last digit
*/

int print_last_digit(int n)
{
int d;

d = (n % 10);
if (d < 0)
d = d * -1;
_putchar ('0' + d);
return (d);
}
