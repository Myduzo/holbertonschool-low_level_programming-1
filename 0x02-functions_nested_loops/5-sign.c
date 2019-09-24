#include "holberton.h"

/**
 * print_sign - function to print sign of number
 * @n: characters
 * Description: Prints sign of number using return statements
 * Return: 1 > 0, 0 = 0 & -1 < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar(',');
	_putchar(' ');
}
