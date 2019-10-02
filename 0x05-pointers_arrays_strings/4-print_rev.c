#include "holberton.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: characters
 * Description: Print in reverse
 * Return: Always 0 is success
 */
void print_rev(char *s)
{
	int count;
	int len;

	len = _strlen(s);

	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
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
