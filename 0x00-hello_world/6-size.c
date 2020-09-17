/**
* main- void
* Description: print the size of various types on the computer
* Return: 0
*/
#include <stdio.h>
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

a = 1;
b = 4;
c = 8;
d = 8;
e = 4;

printf("Size of a char: %d byte(s)\n", a);
printf("Size of an int: %d byte(s)\n", b);
printf("Size of a long int: %ld byte(s)\n", c);
printf("Size of a long long int: %llu byte(s)\n", d);
printf("Size of a float: %1.0f byte(s)\n", e);
return (0);
}
