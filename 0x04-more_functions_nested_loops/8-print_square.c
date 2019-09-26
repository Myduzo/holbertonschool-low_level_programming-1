#include "holberton.h"

/**
 * print_square - function to print a square
 * @size: integers
 * Description: Print a square
 * Return: 0 for success.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, l;

		for (l = 1; l <= size; l++)
		{
			for (m = 1; m <= size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
