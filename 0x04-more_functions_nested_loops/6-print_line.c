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
		int m = 0;
		for (; m <= n; m++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
