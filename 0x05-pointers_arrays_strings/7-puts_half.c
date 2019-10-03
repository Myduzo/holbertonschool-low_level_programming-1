#include "holberton.h"

/**
 * puts_half - function that prints half a string
 * @str: characters
 * Description: Prints half a string
 * Return: Always 0 is success
 */
void puts_half(char *str)
{
	/* initialized the full len, first half & second half */
	int len = _strlen(str);
	int first = len / 2;
	int second;

	/* loops through the second half only & end before null */
	for (second = first; second != '\0'; second++)
	{
		_putchar(str[second]);
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
