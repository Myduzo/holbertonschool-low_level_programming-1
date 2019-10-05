#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 * Description: Prints an integer
 * Return: Integers
 */
void print_number(int n)
{
	int count;
	int length;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			count = 1;
			n = n + 1;
		}
		n = -n;
	}
	for (length = 1000000000; length != 1;)
	{
		if (n >= length)
		{
			_putchar(((n / length) % 10) + '0');
		}
		length = length / 10;
	}
	if (count == 1)
	{
		_putchar(((n % 10) + 1) + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
