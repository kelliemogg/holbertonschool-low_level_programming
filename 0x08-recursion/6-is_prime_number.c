#include "holberton.h"

/**
 * is_prime_number - function
 * description: function to determine if a number is prime
 * @n: number to test
 * Return: prime or not
 */

int is_prime_number(int n)
{
	int x = n - 1;

	if (n < 2)
	{
		return (0);
	}
	return (prime(n, x));
}

/**
 * prime - my function
 * description: prime number test
 * @n: number to pass
 * @x: variable
 * Return: 1, 0
 */

int prime(int n, int x)
{
	if (x == 1)
		return (1);
	{
	if (n % x == 0)
		return (0);
	else
		return (prime(x - 1, n));
	}
}
