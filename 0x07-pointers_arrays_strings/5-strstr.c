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

	/* stop loop at null byte */
	for (i1 = 0; (haystack != NULL || haystack[i1] != '\0'); i1++)
	{
		/* if the loop matches a char in needle */
		if (haystack[i1] == needle[0])
		{
			/* move pointer to get the next matching char */
			for (i2 = 0; haystack[i1 + i2] == needle[i2]; i2++)
			{
				/* if needle is just null byte */
				if (needle[i2] == '\0')
				{
					/* return the substring */
					return (&haystack[i1]);
				}
			}
		}
	}
	/* if needle is just a null byte */
	if (needle[0] == '\0')
	{
		/* return the haystack string */
		return (haystack);
	}
	/* return when there's nothing in needle */
	return (NULL);
}
