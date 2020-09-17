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

a = 1 byte(s);
b = 4 byte(s);
c = 8 byte(s);
d = 8 byte(s);
e = 4 byte(s);

printf("Size of a char: %c\n", a);
printf("Size of an int: %d\n", b);
printf("Size of a long int: %ld\n", c);
printf("Size of a long long int: %llu\n", d);
printf("Size of a float: %1.0f\n", e);
return (0);
}
