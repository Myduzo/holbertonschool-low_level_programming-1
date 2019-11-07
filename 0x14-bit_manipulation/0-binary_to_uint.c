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
	unsigned int i;
	
	char bin [] = {0, 1};

	if (b == NULL)
	{
		return (0);
	}
	else if (b != bin [0] || b != bin [1])
	{
		return (0);
	}
	else
	{
		for (i = 1 << 31; i > 0; i = i / 2)
	}
}
