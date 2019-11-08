#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits
 * needed to be flipped to become another number
 * @n: given unsigned long int
 * @m: given unsigned long int
 * Description: 5. 101
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* declare variable to store the number of bits flipped */
	unsigned int iterate = 0;
	/**
	 * 1. declare variable to perform the EXCLUSIVE-OR operation
	 * 2. if either bits are 1, returns 1
	 * 3. if both bits are 0 or 1, returns 0
	 * 4. essentially, this is a new binary
	 */
	unsigned int new_bin = n ^ m;
	/**
	 * 1. iterate through the new binary
	 * 2. compare the new binary using AND operator
	 * 3. store each count of a bit that was flipped in iterate
	 * 4. right shift by 1
	 */
	while (new_bin)
	{
		iterate += (new_bin & 1);
		new_bin >>= 1;
	}
	/* return the count of flipped bits */
	return (iterate);
}
