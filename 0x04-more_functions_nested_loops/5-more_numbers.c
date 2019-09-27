#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Description: Prints 0-14 ten times.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar((col / 10) + '0');
			}
			_putchar((col % 10) + '0');
		}
		_putchar('\n');
	}
}
