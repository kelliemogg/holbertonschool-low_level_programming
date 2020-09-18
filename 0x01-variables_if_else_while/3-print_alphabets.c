/**
* main- void
* description: alphabet
* Return: 0
*/

#include <stdio.h>
int main(void)
{
char n = 'a';
char m = 'A';

for (; n <= 'z'; n++)

putchar(n);

for (; m <= 'Z'; m++)

putchar(m);
putchar('\n');

return (0);
}
