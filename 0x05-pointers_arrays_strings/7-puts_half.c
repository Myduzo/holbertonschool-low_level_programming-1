#include "holberton.h"

/**
 * puts_half - function that prints half a string
 * @str: characters
 * Description: Prints half a string
 * Return: Always 0 is success
 */
void puts_half(char *str)
{
	/* initialized for full length, half length, second half & counter*/
	int len = _strlen(str);
	int half = len / 2;
	int second;

	/* start at the half way point and loop to the end */
	for (second = half; second <= len; second++)
	{
		/* only capture char that's not the null */
		if (second != '\0')
		{
			/* print the second half */
			_putchar(str[second]);
		}
	}
	/* print new line */
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
