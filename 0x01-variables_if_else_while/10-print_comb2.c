#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int t;
	
	for(j = '0'; j <= '9'; ++j)
	{
		for(t = '0'; t <= '9'; ++t)
		{
			putchar(j);
			putchar(t);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
