#include "holberton.h"

/**
* times_table - times
* description: times table of nine
*
*/

void times_table(void)
{
int m, t, r;

for (m = 0; m <= 9; m++)
{
for (t = 0; t <= 0; t++)
{
r = t * m;
if (r > 9)
{
_putchar ((r / 10) + '0');
_putchar ((r % 10) + '0');
}
else
{
_putchar (r + '0');
}
if (t < 9)
{
_putchar (',');
_putchar (' ');
if (r * (t + 1) <= 9)
_putchar (' ');
}
}
_putchar ('\n');
}
}
