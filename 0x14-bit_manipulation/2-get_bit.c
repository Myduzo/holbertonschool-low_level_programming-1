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
	unsigned int bit;

	bit = ((n >> index) & 1);
	if (bit)
	{
		bit = bit & 1;
		return (bit);
	}
	else if (bit == 0)
	{
		return (0);
	}
	return (-1);
}
