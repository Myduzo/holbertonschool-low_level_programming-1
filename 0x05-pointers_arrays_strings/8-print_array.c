#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 * @a: integers
 * @n: integers
 * Description: Prints n elements of an array
 * Return: Always 0 is success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count < n - 1)
		{
			printf("%d, ", a[count]);
		}
		else
		{
			printf("%d", a[count]);
		}
		count++;
	}
	printf("\n");
}
