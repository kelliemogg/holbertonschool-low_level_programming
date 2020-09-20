#include<stdio.h>
/**
* main- void
* description: hexawhat
* Return: 0
**/

int main(void)
{
int x, y;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
