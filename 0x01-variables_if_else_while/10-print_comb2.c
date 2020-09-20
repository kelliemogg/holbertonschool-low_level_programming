/**
* main- void
* Description: this is about double digits
* Return: 0
*/
#include <stdio.h>

int main(void)
{
int x, y;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
putchar(x);
putchar(y);
if (!(x == '9' && y == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
