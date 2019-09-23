#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, t;

	for (j = 48; j <= 57; ++j)
	{
		for (t = 48; t <= 57; ++t)
		{
			if ((j != t && j != j) || (j != t && t != t))
			{
				putchar(j);
				putchar(t);
				if ((j != 56) || (t != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
