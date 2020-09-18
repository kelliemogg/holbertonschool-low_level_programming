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

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("Last digit of %d is %d is greater than 5\n", n, n % 10);
}
else if (n == 0)
{
  printf("Last digit of %d is %d and is %d\n", n, n % 10, n % 10);
}
else if ((n > 0) && (n < 6))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
