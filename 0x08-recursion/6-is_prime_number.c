#include "holberton.h"

/**
 * helper - helper function
 * @n: integers
 * @i: integers
 * Description: helps with incrementation
 * Return: N/A
 */
int helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (helper(n, i + 1));
}

/**
 * is_prime_number - function that categorizes prime numbers
 * @n: integers
 * Description: categorizes prime numbers
 * Return: 1 for prime & 0 for non-prime
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (helper(n, 2));
}
