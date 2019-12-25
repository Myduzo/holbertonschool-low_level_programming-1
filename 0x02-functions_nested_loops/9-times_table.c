#include "holberton.h"

/**
 * times_table - function that prints the 9 times table
 * @void: none
 * Description: 9. Learn your times table
 * Return: nothing
 */
void times_table(void)
{
	/* declare iteration variables */
	int row, col;
	/* declare variable to hold multiplication result */
	int prod;
	/**
	 * 1. iterate from 0-9 & perform multiplication for product
	 * 2. if product is 0-9, print space & last digit
	 * 3. if product is greater then 9, print both
	 * 4. from columns 0-9, print comma & space
	 */
	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			if (prod >= 0 && prod <= 9)
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
