#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function that reallocates memory
 * @ptr: pointer to the memory
 * @old_size: size in bytes
 * @new_size: size in bytes
 * Description: Lookup man realloc
 * Return: NULL if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* declare temporary pointer */
	unsigned int *array;
	/* "added" memory shouldn't be initialized */
	if (new_size > old_size)
	{
		array = malloc(new_size);
		free(ptr);
		return (array);
	}
	/* if reallloc fails the original block is untouched */
	/* it's not freed or moved, just return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* call is equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		array = malloc(new_size);
		free(array);
		return (array);
	}
	/* call is equivalent to free(ptr) and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* return ptr to newly allocated memory */
	return (ptr);
}
