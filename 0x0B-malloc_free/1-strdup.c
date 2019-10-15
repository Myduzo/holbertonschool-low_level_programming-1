#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function that duplicates a string
 * @str: string
 * Description: Lookup man strdup for reference
 * Return: NULL for fail or if string is NULL
 */
char *_strdup(char *str)
{
	/* declare a pointer for the duplicate */
	char *dup;

	/* find the size of the string */
	/* including null byte */
	unsigned int size = strlen(str) + 1;

	/* return NULL for empty string */
	if (str == '\0')
	{
		return (NULL);
	}

	/* allocate memory for the duplicate */
	dup = malloc(size);

	/**
	 * copy string bytes to duplicate
	 * memcpy(dest, src, byte)
	 * return dup if there's space
	 * return NULL if there isn't
	 */
	if (dup != '\0')
	{
		memcpy(dup, str, size);
		return (dup);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
