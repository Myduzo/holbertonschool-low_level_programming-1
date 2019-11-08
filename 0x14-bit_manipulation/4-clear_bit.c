#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: given unsigned long int
 * @index: given index that starts from 0
 * Description: 4. 100
 * Return: see below
 * 1. if successful, 1
 * 2. if error, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
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
	 * 3. compare it using AND operator
	 * 4. flip the binary digits using COMPLEMENT operator
	 * 5. compare each binary digit to 1
	 * 6. if true, return 1
	 * 7. if false, return 0
	 * 8. if overall function is successful, return 1
	 */
	*n &= ~(1 << index);
	{
		return (1);
	}
}
