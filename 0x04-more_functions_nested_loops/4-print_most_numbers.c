#include "holberton.h"

/**
 * print_most_numbers - function to print certain int
 *
 * Description: Prints certain integers
 * Return: 0 for success.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if ((num != 50) && (num != 52))
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
