#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: integers
 * @max: integers
 * Description: Create an array of integers
 * Return: NULL if fail
 */
int *array_range(int min, int max)
{
	/* declare array */
	int *array;
	/* declare length and iteration variables */
	int len, iterate;

	/* length of the values from min to max */
	len = max - min;
	/* if values aren't ascending, return NULL */
	if (min > max)
		return (NULL);
	/* allocate memory */
	array = malloc((1 + len) * sizeof(int));
	/* if malloc fails, return NULL */
	if (!array)
		return (NULL);
	/**
	 * copy the min value into the array first,
	 * iterate and copy then the end of the length,
	 * create array and return pointer to it
	 */
	for (iterate = 0; iterate <= len; iterate++)
	{
		array[iterate] = iterate + min;
	}
	return (array);
}
