#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: length
 */
int _strlen_recursion(char *s)
{
	/* BASE CASE */
	/* if pointer is at null byte */
	if (*s == '\0')
	{
		/* stop and return nothing */
		return (0);
	}
	/* if pointer is not at null byte */
	else
	{
		/* first, return 1 to start iteration */
		/* then, add 1 as it increments */
		return ((1) + _strlen_recursion(s + 1));
	}
}
