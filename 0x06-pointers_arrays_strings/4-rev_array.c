#include "holberton.h"

/**
 * reverse_array - function that reverses an array of integers
 * @a: array
 * @n: integers
 * Description: Reverse the elements of an array
 * Return: Content of an array of integers
 */
void reverse_array(int *a, int n)
{
	/* declare counter and placeholder variables */
	int count;
	int ph;

	/* hold at the half way point */
	for (count = 0; count < n / 2; count++)
	{
		ph = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = ph;
	}
	/* loop the strings */
	for (count = 0; count < n; count++)
	{
		;
	}
}
