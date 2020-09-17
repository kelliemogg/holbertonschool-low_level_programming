/**
* main- void
* Description: print the size of various types on the computer
* Return: 0
*/
#include <stdio.h>
int main(void)
{
printf("%c\n", sizeof(char));
printf("%d\n", sizeof(int));
printf("%ld\n", sizeof(long int));
printf("%llu\n", sizeof(long long int));
printf("%f\n", sizeof(float));
return (0);
}
