#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters
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
 * puts2 - function that prints every other character
 * @str: characters
 * Description: 6. Half the lies they tell about me aren't true
 * Return: nothing
 */
void puts2(char *str)
{
	/* declare and initialize variable to iterate the string */
	int iterate = 0;
	/* declare variable to find the length of the string */
	int len = _strlen(str);

	/* iterate for every other char until null byte */
	/* print the char as it iterates and new line at end */
	for (; iterate <= len; iterate += 2)
	{
		if (str[iterate] != '\0')
		{
			_putchar(str[iterate]);
		}
	}
	_putchar('\n');
}
