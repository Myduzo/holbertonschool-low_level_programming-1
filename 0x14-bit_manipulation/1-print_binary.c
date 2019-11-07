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
	/* iterate backwards through base 10 (0 to 32) */
	for (shifts = 32; shifts >= 0; shifts--)
	{
		/* n will right shift by the number of shifts */
		binary = n >> shifts;
		/* if binary is 1, print 1 */
		/* if not (all else), print 0 */
		if (binary == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
