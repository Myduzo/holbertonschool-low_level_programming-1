#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int t = '9';

	for (j = '0'; j <= '8'; j++)
	{
		putchar(j);
		putchar(',');
	}
	putchar(t);
	putchar('\n');
	return (0);
}
