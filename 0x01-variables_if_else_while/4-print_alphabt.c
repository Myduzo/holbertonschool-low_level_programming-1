#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if ((j != 'e') && (j != 'q'))
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
