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
	/* BASE CASE */
	/* if pointer is at null byte */
	if (*s == '\0')
	{
		/* print new line */
		_putchar('\n');
	}
	/* if pointer is not null byte */
	if (*s != '\0')
	{
		/* print the first char found */
		_putchar(*s);
		/* move the pointer to the next index */
		_puts_recursion(s + 1);
	}
}
