#include "holberton.h"

/**
* times_table - times
* description: times table of nine
*
*/

int main(void)
{
int m, t, r;

for (m = 0; m <= 9; m++)
{
for (t = 0; t <= 0; t++)
{
r = t * m;
if (0 != r / 10)
{
_putchar ((r / 10) + '0');
_putchar ((r % 10) + '0');
}
else
{
_putchar (r + '0');
}
if (t != 9)
{
if ((r = ((t + 1) + m)) >= 10)
{
_putchar (',');
_putchar (' ');
}
else
{
_putchar (',');
_putchar (' ');
_putchar (' ');
}
}
}
}
}
