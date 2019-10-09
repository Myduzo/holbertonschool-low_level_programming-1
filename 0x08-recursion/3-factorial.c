#include "holberton.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: integers
 * Description: Calculating factorials
 * Return: -1 is error
 */
int factorial(int n)
{
	/* BASE CASE */
	/* if integer is lower than 0 */
	if (n < 0)
	{
		/* then, stop and return an error */
		return (-1);
	}
	/* if integer is 0 or 1 */
	if (n == 0 || n == 1)
	{
		/* then, return 1 */
		/* because the factorial of !0 and !1 is 1 */
		return (1);
	}
	/* return the factorial of an given integer */
	return (n * factorial(n - 1));
}
