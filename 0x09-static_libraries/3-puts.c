#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: characters
 * Description: Prints a string
 * Return: Always 0 is success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
