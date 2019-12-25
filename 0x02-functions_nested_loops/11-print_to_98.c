#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - function that prints a range of natural numbers
 * @n: natural numbers
 * Description: 11. Holberton School, 98 Battery Street, the OG
 * Return: nothing
 */
void print_to_98(int n)
{
	/* declare variable for iteration */
	int iterate;

	/* iteration and print for 0- to 98 */
	if (n < 98)
	{
		for (iterate = n; iterate < 98; iterate++)
		{
			printf("%d, ", iterate);
		}
		printf("98");
		printf("\n");
	}
	/* iteration and print for 98+ to 98 */
	if (n >= 98)
	{
		for (iterate = n; iterate >= 98; iterate--)
		{
			if (iterate != 98)
			{
				printf("%d, ", iterate);
			}
		}
		printf("98");
		printf("\n");
	}
}
