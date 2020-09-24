#include "holberton.h"

/**
* main- void
* description: alphabet 10x
*/

void print_alphabet_x10(void)
{
int c, k;

for (k = 0; k <= 9; k++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
