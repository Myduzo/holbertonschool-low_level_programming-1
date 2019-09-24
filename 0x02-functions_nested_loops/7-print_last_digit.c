#include "holberton.h"

/**
 * print_last_digit - function to print last digit of number
 * @n: integers
 * Description: Prints last digit of number
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + '0');
	return (last);
}
