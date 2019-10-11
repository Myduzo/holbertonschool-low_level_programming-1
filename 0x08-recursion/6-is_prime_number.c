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
	/* BASE CASE */
	/* if given integer is less than or equal to 2 */
	if (n <= 1)
	{
		/* then, return 2 because it's the first prime */
		return (0);
	}
	/* if given integer is even */
	if (n % i == 0)
	{
		/* then, return 0 because prime #s are odd (except 2) */
		return (0);
	}
	/* if there are more than one factor */
	/* Ex: 4 = 2*2 and 1*4 */
	if (i * i > n)
	{
		/* then, return 1 because it's prime */
		return (1);
	}
	/* recursion  */
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
	/* BASE CASE */
	/* if given integer is 0 */
	if (n == 0)
	{
		/* then, return 0 because 0 isn't a prime */
		return (0);
	}
	/* check for prime starting at 2 and return if prime */
	return (helper(n, 2));
}
