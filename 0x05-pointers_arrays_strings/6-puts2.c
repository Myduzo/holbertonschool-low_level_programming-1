#include "holberton.h"

/**
 * puts2 - function that prints every other char
 * @str: characters
 * Description: Prints every other char
 * Return: Always 0 is success
 */
void puts2(char *str)
{
	int count;

	for (count = 0; count < str[count]; count += 2)
	{
		if (count - 1 != '\0')
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
