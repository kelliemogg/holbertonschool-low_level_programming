/**
 main- void
* description: alphabet soup
* Return: 0
**/

#include <stdio.h>
int main(void)
{
char a = 'a';

for (; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
