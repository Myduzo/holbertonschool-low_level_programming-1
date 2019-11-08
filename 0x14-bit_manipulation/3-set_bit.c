#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: pointer to unsigned long int
 * @index: index that starts from 0
 * Description: 3. 11
 * Return: see below
 * 1. if successful, 1
 * 2. if error, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* if index is greater than 64 bits */
	/* then, return -1 */
	if (index > 64)
	{
		return (-1);
	}
	/**
	 * 1. left shift by index
	 * 2. take the value of n
	 * 3. compare it using OR operator
	 * 4. compare each binary digit to 1
	 * 5. if true, return 1
	 * 6. if false, return 0
	 * 7. if overall function is successful, return 1
	 */
	*n |= 1 << index;
	{
		return (1);
	}
}
