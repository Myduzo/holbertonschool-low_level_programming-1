#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: integers
 * Description: Using malloc to allocate memory
 * Return: 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	/* declare a temporary pointer */
	unsigned int *temp;
	
	/* allocate memory */
	temp = malloc(b);
	/* if malloc fails, stop processing */
	if (temp == NULL)
		exit (98);
	/* return pointer to allocate memory */
	return (temp);
}
