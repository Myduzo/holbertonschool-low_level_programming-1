#include "holberton.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: letters
 * @needle: letters
 * Description: Locates the first occurrence of the substring needle
 * in the string haystack
 * Return: Pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	/* declare iteration variables */
	int i1;
	int i2;

	/* stop if there's no string/value and at null byte */
	for (i1 = 0; haystack[i1] != '\0'; i1++)
	{
		if (haystack[i1] == needle[0])
		{
			for (i2 = 0; haystack[i1 + i2] == needle[i2]; i2++)
			{
				/* if the string matches one of the bytes in accept */
				if (needle[i2] == '\0')
				{
					/* returns the memory location to the byte */
					return (&haystack[i1]);
				}
			}
		}
	}
	/* if accept is just a null byte (aka no value) */
	if (needle[0] == '\0')
	{
		/* returns null byte */
		return (haystack);
	}
	/* if there's nothing to match */
	return ('\0');
}
