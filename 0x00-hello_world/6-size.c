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
c = 4;
d = 8;
e = 4;

printf("Size of a char: %c\n", sizeof(char) a);
printf("Size of an int: %d\n", sizeof(int) b);
printf("Size of a long int: %ld\n", sizeof(long int) c);
printf("Size of a long long int: %llu\n", sizeof(long long int) d);
printf("Size of a float: %1.0f\n", sizeof(float) e);
return (0);
}
