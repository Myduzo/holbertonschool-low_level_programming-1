#include "holberton.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: characters
 * Description: Print in reverse
 * Return: Always 0 is success
 */
void print_rev(char *s)
{
	char len;
	len = _strlen(s);
	
	
	s[len]

	for (*s = 0; *s != '0'; s++)
	{
		_putchar(*s);
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
