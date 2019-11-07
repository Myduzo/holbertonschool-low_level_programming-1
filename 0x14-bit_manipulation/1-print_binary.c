#include "holberton.h"

/**
 * print_binary - function that prints a binary from an unsigned long int
 * @n: unsigned long int
 * Description: 1.1
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* declare variable to obtain the number of shifts */
	int shifts;
	/* declare variable to store binary */
	int binary;
	/* declare variable to find leading zeros */
	int flag = 0;
	/* if zero is given, print zero */
	if (n == 0)
	{
		_putchar('0');
	}
	/* iterate backwards through base 10 (0 to 32) */
	for (shifts = 32; shifts >= 0; shifts--)
	{
		/* n will right shift by the number of shifts */
		binary = n >> shifts;
		/**
		 * if binary is bitwise 1 and flag is 1, then print 1
		 * if not (all else), print 0
		 */
		if (binary & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
