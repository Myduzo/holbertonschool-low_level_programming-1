#include "holberton.h"

/**
 * jack_bauer - function to print every min of the day
 *
 * Description: Prints every min of the day
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int first, second, third, fourth;

	first = 0;
	while (first <= 2)
	{
		while (second <= 3)
		{
			third = 0;
			while (third <= 5)
			{
				while (fourth <= 9)
				{
					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(':');
					_putchar(third + '0');
					_putchar(fourth + '0');
					_putchar('\n');
					fourth++;
				}
				third++;
				fourth = 0;
			}
			second++;
		}
		first++;
		second = 0;
	}
}
