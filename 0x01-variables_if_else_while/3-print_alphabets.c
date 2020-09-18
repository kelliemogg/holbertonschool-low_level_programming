#include <stdio.h>
/**
*Main- void
*Description:alphabet
*Return: 0
*/

int main(void)

{
char n = 'a';
char m = 'A';
for (n = 'a'; n <= 'z'; n++, n)
putchar(n);
for (m = 'A'; m <= 'Z'; m++, m)
putchar(m);
putchar('\n');
return (0);
}
