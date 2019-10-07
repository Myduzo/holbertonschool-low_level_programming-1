#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - function locates a string for any set of bytes
 * @s: letters
 * @accept: letters
 * Description: Locates the first occurrence in the string
 * of any of the bytes in the string
 * Return: Pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	/* declare iteration variables */
	int iterate1;
	int iterate2;

	/* look through the entire string */
	/* stop if there's no string/value and at null byte */
	for (iterate1 = 0; (s != NULL && s[iterate1] != '\0'); iterate1++)
	{
		/* look through the entire string */
		/* stop at null byte */
		for (iterate2 = 0; accept[iterate2] != '\0'; iterate2++)
		{
			/* if the string matches one of the bytes in accept */
			if (s[iterate1] == accept[iterate2])
			{
				/* returns the memory location to the byte */
				return (&s[iterate1]);
			}
		}
		/* if accept is just a null byte (aka no value) */
		if (accept == '\0')
		{
			/* returns null byte */
			return (&s[iterate1]);
		}
	}
	/* if there's nothing to match */
	return (NULL);
}
