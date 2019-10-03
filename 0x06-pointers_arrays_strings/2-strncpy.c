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
	/* declared variables to count the length */
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		/* take dest string & append the src size to it */
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: Always 0 is success
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}
