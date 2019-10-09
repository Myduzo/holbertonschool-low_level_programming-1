#include "holberton.h"

/**
 * _puts_recursion - function that prints a string and a new line
 * @s: letters
 * Description: Look up man puts for reference
 * puts function automatically adds a new line
 * Return: a char string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s++ == '\0')
	{
		_putchar(*s);
	}
	_putchar('\n');
}
