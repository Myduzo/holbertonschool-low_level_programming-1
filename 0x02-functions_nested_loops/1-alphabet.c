#include "holberton.h"

/**
 * print_alphabet - prototype
 *
 * Description: Prototype print_alphabet(void).
 * Return: 0 for success.
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
