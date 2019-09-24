#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char *flav = "Holberton";
	int i = 0;

	while (flav[i] != '\0')
	{
		_putchar(flav[i]);
		i++;
	}
	return (0);
}
