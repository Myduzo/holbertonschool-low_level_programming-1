#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x^y
 * @x: integers
 * @y: integers
 * Description: Look up man pow for reference
 * Return: -1 is negative
 */
int _pow_recursion(int x, int y)
{
	/* BASE CASE */
	/* if y is 0 */
	if (y == 0)
	{
		/* then, stop and return 1 */
		return (1);
	}
	/* if the exponent y is a positive integer */
	else if (y > 0)
	{
		/* then, calculate using formula x*f(x,y-1) */
		return (x * _pow_recursion(x, y - 1));
	}
	/* if y is a negative integer */
	else
	{
		/* then, return -1 */
		return (-1);
	}
}
