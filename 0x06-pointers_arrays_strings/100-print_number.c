#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 * Description: 6893/1000 = 6 | 6893/100 = 68 | 6893/10 = 689 | 6893/1 = 3
 * Return: Integers
 */
void print_number(int n)
{
	int count;
	int length;

	if (n < 0) /* look for the smallest negative integer */
	{
		_putchar('-');
		if (n == -2147483648) /* the smallest negative integer known */
		{	/* change -2147483648 to -2147483647 */
			count = 1;
			n = n + 1;
		}
		n = -n; /* change -2147483647 to 2147483647 (largest integer known) */
	}
	for (length = 1000000000; length != 1;) /* set length & loop zeros */
	{
		if (n >= length) /* at the longest possible length */
		{
			_putchar(((n / length) % 10) + '0'); /* print all digits except the ones */
		}
		length = length / 10; /* outcome = math */
	}
	if (count == 1) /* if it's the smallest integer */
	{
		_putchar(((n % 10) + 1) + '0'); /* print the ones place */
	}
	else
	{
		_putchar(n % 10 + '0'); /* for all other integers, print the ones place */
	}
}
