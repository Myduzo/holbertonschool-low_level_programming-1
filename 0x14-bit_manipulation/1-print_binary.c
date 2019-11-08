#include "holberton.h"

/**
 * print_binary - function that prints a binary from an unsigned long int
 * @n: unsigned long int
 * Description: 1.1
 * Return: nothing
 * Alternative: 
 * 1. if n is greater than 1, then recurse by right shift
 * 2. if n is 1, then print n
 */
void print_binary(unsigned long int n)
{
	/* declare variable to obtain the number of shifts */
	int shifts;
	/* declare variable to store binary */
	int binary;
	/* if zero is given, print zero */
	if (n == 0)
	{
		_putchar('0');
	}
	/* iterate backwards through base 10 (0 - 32) */
	for (shifts = 63; shifts >= 0; shifts--)
	{
		/* n will right shift by the number of shifts */
		binary = n >> shifts;
		_putchar(binary & 1)
	}
}
