#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Description: Lookup man strcat for reference
 * Return: NULL for fail
 */
char *str_concat(char *s1, char *s2)
{
	/* declare a pointer for the concatenated string */
	char *str;
	/* declare iteration variables */
	int len1 = 0, len2 = 0, iterate1 = 0, iterate2 = 0;
	/* if strings are NULL, then return empty */
	/* return pointer to empty string */
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	/* find the length of the strings */
	for (; s1[len1] != '\0'; len1++)
	{
	}
	for (; s2[len2] != '\0'; len2++)
	{
	}
	/* allocate memory for the str array */
	str = malloc((s1[len1] + s2[len2] + 1) * sizeof(char));
	/* return NULL if malloc fails */
	if (str == NULL)
	{
		return (NULL);
	}
	/* iterate through the strings */
	/* copy the strings into str array */
	for (; iterate1 < s1[len1]; iterate1++)
	{
		str[iterate1] = s1[iterate1];
	}
	for (; iterate2 <= s2[len2]; iterate2++)
	{
		str[iterate1 + iterate2] = s2[iterate2];
	}
	return (str);
}
