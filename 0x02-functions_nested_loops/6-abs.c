#include "holberton.h"

/**
 * _abs - function computes the absolute value of int
 * @n: integers
 * Description: Prints the absolute value of int
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
