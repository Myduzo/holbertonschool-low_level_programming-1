#include "holberton.h"

/**
 * *_strncpy - function that copies a string by size
 * @dest: destination string
 * @src: source string
 * @n: integers
 * Description: Lookup man strncpy for reference
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* declared variable to count the length */
	int count = 0;

	/* stop before null */
	while (count < n && src[count] != '\0')
	{
		/* set the dest string the same as src */
		dest[count] = src[count];
		count++;
	}
	/* stop before null  */
	while (count < n)
	{
		/* add null */
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

