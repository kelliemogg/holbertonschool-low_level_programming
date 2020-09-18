#include <stdio.h>

/**
* Main- void
* Description: alphabet
* Return: 0
*/

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
