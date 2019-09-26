#include "holberton.h"

/**
 * print_numbers - function to print zero & int
 *
 * Description: Prints zero and integers
 * Return: 0 for success.
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
