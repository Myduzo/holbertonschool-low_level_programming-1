#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - function locates a char in a string
 * @s: letters
 * @c: letters
 * Description: Returns pointer to the first occurrence of char in a string
 * Return: Pointer to char
 */
char *_strchr(char *s, char c)
{
	/* declare iteration variable */
	int iterate;

	/* look through the entire string */
	/* stop if there's no string/value and at null byte */
	for (iterate = 0; (s != NULL && s[iterate] != '\0'); iterate++)
	{
		/* find char in string */
		if (s[iterate] == c)
		{
			/* returns the memory location of char */
			return (&s[iterate]);
		}
	}
	/* if char is null byte */
	if (c == '\0')
	{
		/* returns null byte */
		return (&s[iterate]);
	}
	/* if char is not found */
	return (NULL);
}
