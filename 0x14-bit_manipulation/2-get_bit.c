#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: unsigned long int
 * @index: given index that starts from 0
 * Description: 2. 10
 * Return: see below
 * 1. if successful, the value of bit at index
 * 2. if error, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* if index is longer than an long int */
	/* then, return -1 */
	if (index > 64)
	{
		return (-1);
	}
	/* if not, right shift n by index */
	/* return the value of bit */
	else
	{
		n = (n >> index);
		return (n & 1);
	}
}
