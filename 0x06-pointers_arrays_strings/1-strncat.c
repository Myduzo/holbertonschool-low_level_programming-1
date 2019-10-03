#include "holberton.h"

/**
 * *_strncat - function that concatenates by size
 * @dest: destination string
 * @src: source string
 * @n: integers
 * Description: Lookup man strncat for reference
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	/* declared variables to count the length */
	int count = 0;
	int len = 0;

	/* count the length of dest */
	while (dest[len] != '\0')
	{
		/* increment by one to get every char in string */
		len++;
	}
	/* loop through the string until the end excluding null */
	while (count < n && src[count] != '\0')
	{
		/* take dest string & append the src size to it */
		dest[len + count] = src[count];
		count++;
	}
	/* add null to output */
	dest[len + count] = '\0';
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
