#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: unsigned long int
 * @index: given index that starts from 0
 * Description: 3. 11
 * Return: see below
 * 1. if successful, 1
 * 2. if error, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* declare variable to hold value of bit */
	unsigned int new_n = *n;
	unsigned int value;

	value = ((1 << index) | new_n);
	if (value)
	{
		return (1);
	}
	return (-1);
}
