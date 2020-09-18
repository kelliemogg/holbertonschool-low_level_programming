/**
*main- void
*Description: this program is about identifying the last digit of n
*Return: 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;
int rem;

srand(time(0));
n = rand() - RAND_MAX / 2;
rem = n % 10;

if (rem > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, rem);
}
else if (rem == 0)
{
printf("Last digit of %d is %d and is 0\n", n, rem);
}
else if (rem != 0 && rem < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
}
return (0);
}
