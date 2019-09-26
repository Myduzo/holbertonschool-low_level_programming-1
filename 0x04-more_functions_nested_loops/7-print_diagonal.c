#include "holberton.h"

/**
 * print_diagonal - function to print diagional lines
 * @n: integers
 * Description: Print diagional lines
 * Return: 0 for success.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, l;

		for (l = 1; l <= n; l++)
		{
			for (m = 1; m < l; m++)
			{
				_putchar(32);
			}
			for (m = 1; m <= 1; m++)
			{
				_putchar(92);
			}
			_putchar('\n');
		}
	}
}
