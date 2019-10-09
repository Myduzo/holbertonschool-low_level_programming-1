#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: letters
 * Description: Look up man puts for reference
 * puts function automatically adds a new line
 * Return: a char string
 */
void _print_rev_recursion(char *s)
{
	/* BASE CASE - assumed string will always have a null byte */
	/* if pointer is not null byte */
	if (*s != '\0')
	{
		/* move the pointer to the next index */
		_print_rev_recursion(s + 1);
		/* print the string */
		_putchar(*s);
	}
}
