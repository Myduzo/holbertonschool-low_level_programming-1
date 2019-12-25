#include "holberton.h"

/**
 * times_table - function that prints the 9 times table
 * @void: none
 * Description: 9. Learn your times table
 * Return: nothing
 */
void times_table(void)
{
	int row, col, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
