#include "holberton.h"

/**
 * print_triangle - function to print a triangle
 * @size: integers
 * Description: Print a triangle
 * Return: 0 for success.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b, c;

		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(32);
			}
			for (c = 1; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
