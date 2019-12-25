#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Description: Look up man strlen for reference
 * Return: length of string
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

/**
 * puts_half - function that prints half a string
 * @str: string
 * Description: 7. Winning is only half of it.
 * Having fun is the other half
 * Return: nothing
 */
void puts_half(char *str)
{
	/* declare variable to find the length of the string */
	int len = (_strlen(str) + 1);
	/* declare variable to find half the length of the string */
	int half = (len / 2);
	/* declare variable and initialize to iterate the string */
	int iterate = half;

	/* start iteration at the half way point until null byte */
	/* print the char as it iterates and new line at end */
	for (; iterate <= len; iterate++)
	{
		if (str[iterate] != '\0')
		{
			_putchar(str[iterate]);
		}
	}
	_putchar('\n');
}
