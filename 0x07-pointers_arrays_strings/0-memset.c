#include "holberton.h"

/**
 * *_memset - function that fills a block of memory with a value
 * @s: letters
 * @b: letters
 * @n: integers
 * Description: Fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    /* declare iteration variable */
	unsigned int iterate;

	for (iterate = 0; iterate < n; iterate++)
	{
		s[iterate] = b;
	}
	return (s);
}
