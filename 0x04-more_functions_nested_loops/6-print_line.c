#include "holberton.h"

/**
 * print_line - function to print lines
 * @n: integers
 * Description: Print lines
 * Return: 0 for success.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n; l++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
