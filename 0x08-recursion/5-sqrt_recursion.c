#include "holberton.h"

/**
 * helper - helper function
 * @n: integers
 * @x: integers
 * Description: Declare another parameter & recurse
 * Ex: n = 16 = 4 x 4
 * Formulas: n/x=x || x*x=n
 * Return: N/A
 */
int helper(int n, int x)
{
	/* BASE CASE */
	/* if given integer is zero */
	if (n == 0)
	{
		/* then, return 0 because its sqrt would be  0 */
		return (0);
	}
	/* if the sqrt of n is greater than the given integer */
	if (x * x > n)
	{
		/* then, return -1 because it doesn't have a perfect sqrt */
		return (-1);
	}
	/* if it's a perfect sqrt */
	if (x * x == n)
	{
		/* then, return it */
		return (n / x);
	}
	/* recursive call */
	return (helper(n, (x + 1)));
}

/**
 * _sqrt_recursion - function that returns the natural sqrt
 * @n: integers
 * Description: Look up man sqrt for reference
 * Return: -1 when there's no natural srt
 */
int _sqrt_recursion(int n)
{
	/* return the sqrt when found */
	return (helper(n, 1));
}
