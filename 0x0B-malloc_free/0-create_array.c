#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 * @c: char
 * Description: Create an array
 * Return: NULL for fail or when size is 0
 */
char *create_array(unsigned int size, char c)
{
	/* declare a iteration variable */
	unsigned int iterate;

	/* declare a pointer to array */
	char *array;

	/* call malloc to request memory from heap */
	array = malloc(size * sizeof(char));

	/* return NULL if size is 0 or */
	/* pointer fails to return to array */
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	/* looking for the buffer size */
	for (iterate = 0; iterate < size; iterate++)
	{
		/* copying the array to char c */
		array[iterate] = c;
	}
	/* pointer successfully returns to array */
	return (array);
}
