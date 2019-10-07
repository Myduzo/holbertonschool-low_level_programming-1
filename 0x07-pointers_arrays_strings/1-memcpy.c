#include "holberton.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: letters
 * @src: letters
 * @n: integers
 * Description: Copies n bytes from memory area src to dest
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* declare iteration variable */
	unsigned int iterate;

	/* will copy up to the size of n */
	for (iterate = 0; iterate < n; iterate++)
	{
		/* copy src to dest */
		dest[iterate] = src[iterate];
	}
	return (dest);
}
