/**
* main- void
* Description: print the size of various types on the computer
* Return: 0
*/
#include <stdio.h>
int main(void)
{
char
printf("Size of a char: %c\n", sizeof(char));
printf("Size of an int: %d\n", sizeof(int));
printf("Size of a long int: %ld\n", sizeof(long int));
printf("Size of a long long int: %llu\n", sizeof(long long int));
printf("Size of a float: %f\n", sizeof(float));
return (0);
}
