#include "holberton.h"

/**
 * puts2 - function that prints every other char
 * @str: characters
 * Description: Prints every other char
 * Return: Always 0 is success
 */
void puts2(char *str)
{
	/* declared variable to count the string */
	int count;

	/* counts every other char from 0 to the null */
	for (count = 0; count < str[count]; count += 2)
	{
		/* stops before the null */
		if (count - 1 != '\0')
		{
			/* prints the string */
			_putchar(str[count]);
		}
	}
	/* prints a new line */
	_putchar('\n');
}
