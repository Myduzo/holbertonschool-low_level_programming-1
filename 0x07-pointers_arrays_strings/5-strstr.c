#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Description: 5. strstr
 * Return: see below
 * 1. upon success, return pointer to beginning of substring
 * 2. upon fail, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	/* declare and initialize pointers to string and substring */
	char *ptr_h = haystack;
	char *ptr_n = needle;
	/* if string or substring doesn't exists, return NULL */
	if (haystack == NULL)
	{
		return (NULL);
	}
	if (needle == NULL)
	{
		return (NULL);
	}
	/**
	 * 1. iterate through the string
	 * 2. also iterate through substring to find a match
	 * 3. if found, return pointer to first occurrence of it in the string
	 * 4. if substring is not found, return NULL
	 * 5. all else, return NULL
	 */
	for (; *haystack; haystack++)
	{
		for (ptr_h = haystack, ptr_n = needle; *ptr_h == *ptr_n; ++ptr_h, ++ptr_n)
		{
			;
		}
		if (*ptr_n == '\0')
		{
			return (haystack);
		}
		if (!(ptr_n))
		{
			return (NULL);
		}
	}
	return (NULL);
}
