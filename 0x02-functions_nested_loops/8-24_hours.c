#include "holberton.h"

/**
 * jack_bauer - function to print every min of the day
 *
 * Description: Prints every min of the day
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int first = 0, second = 0, third = 0, fourth = 0;

	while (first <= 2)
	{
		while (second <= 9 && first < 3)
		{
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
					if ((first == 2) && (second == 3) && (third == 5) && (fourth == 9))
						break;
					fourth++;
				}
				if ((first == 2) && (second == 3) && (third == 5) && (fourth == 9))
					break;
				third++;
				fourth = 0;
			}
			if ((first == 2) && (second == 3) && (third == 5) && (fourth == 9))
				break;
			second++;
			third = 0;
		}
		if ((first == 2) && (second == 3) && (third == 5) && (fourth == 9))
			break;
		first++;
		second = 0;
	}
}
