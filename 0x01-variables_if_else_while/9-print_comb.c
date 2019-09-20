#include <stdio.h>

/**
 * main - Prints all possible combos of single digit numbers separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
