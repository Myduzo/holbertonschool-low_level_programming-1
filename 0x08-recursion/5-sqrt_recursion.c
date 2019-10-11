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
	/* if sqrt is zero */
	if (x == 0)
	{
		/* then, return 0 because sqrt of 0 is 0 */
		return (0);
	}
	/* if sqrt is less than zero */
	if (x < 0)
	{
		/* then, return -1 */
		return (-1);
	}
	/* calculates the sqrt */
	if (x * x == n)
	{
		/* return the sqrt */
		return (x);
	}
	/* recursive to change x */
	return (helper(n, (x - 1)));
}

/**
 * _sqrt_recursion - function that returns the natural sqrt
 * @n: integers
 * Description: Look up man sqrt for reference
 * Return: -1 when there's no natural srt
 */
int _sqrt_recursion(int n)
{
	/* initialize parameter x */
	int x = n;
	/* return the sqrt when found */
	return (helper(n, x));
}
