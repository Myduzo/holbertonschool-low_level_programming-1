#include "holberton.h"

/**
 * print_alphabet_x10 - prototype
 *
 * Description: Print the alphabet 10x.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char j;

	while (c < 10)
	{
		c++;
		j = 'a';
		while (j <='z')
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	}
}


