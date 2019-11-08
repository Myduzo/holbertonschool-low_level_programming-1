#include "holberton.h"

/**
 * print_binary - function that prints a binary from an unsigned long int
 * @n: unsigned long int
 * Description: 1.1
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* if n is greater than 1 */
	/* recruse and right shift by 1 */
	if (n > 1)
		print_binary(n >> 1);
	/* compare n to 1 */
	n = n & 1;
	/* print n */
	_putchar(n + '0');
}

/*
 * declare variable to obtain the number of shifts
 * int shifts;
 * declare variable to store binary
 * int binary = 0;
 * iterate backwards through base 10 (0 - 63)
 * for (shifts = 63; shifts >= 0; shifts--)
 * {
 *  n will right shift by the number of shifts
 *  binary = n << shifts;
 * }
 * print binary
 * _putchar((binary & 1) + '0');
 */
