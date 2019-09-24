#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char *flav = "Holberton";
	int c = 0;

	while (flav[c] != '\0')
	{
		_putchar(flav[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
