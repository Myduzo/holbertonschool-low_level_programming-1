#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Description: 0.0
 * Return: see below
 * 1. the converted number
 * 2. 0 if b contains chars that are not 0 or 1
 * 3. 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/* declare variable to store int */
	int num = 0;
	/* iterate from right to left till null byte */
	for (; *b != '\0'; b++)
	{
		/* if the value of b is not 0 or 1 */
		/* then, return 0) */
		if ((*b != '0') && (*b != '1'))
		{
			return (0);
		}
		/* convert to binary (base 2) */
		/* convert binary to int */
		num = (num * 2) + (*b - '0');
	}
	/* return unsigned int */
	return (num);
}
