/**
 *main- void
 *Description: this tells you the value of a number
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

if (n > 0)
printf("%d is positive \n", n);
else if (n < 0)
printf("%d is negative \n", n);
else
printf("%d is zero \n", n);
return (0);
}
