#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Description: Prints 0-14 10x.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num = 0;
	int numb;

	while (num < 10)
	{
		numb = 48;
		while (numb <= 57)
		{
			_putchar(numb);
			numb++;
		}
		_putchar('\n');
		num++;
	}
}
