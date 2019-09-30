#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 *
 * Description: Look up man strlen for reference
 * Return: Always 0 is success
 */
int _strlen(char *s)
{
	int len = 1;
	int count;

	for (count = 1; s[count] != 0; count++)
	{
		len++;
	}
	return (len);
}
