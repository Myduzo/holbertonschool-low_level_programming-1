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
	/* declare a pointer for the concatenate string */
	char *str;
	/* declare iteration variables */
	int len1 = 0, len2 = 0, i1 = 0, i2 = 0;
	/* if strings are NULL, then return empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find the length of the strings */
	for (; s1[len1] != '\0'; len1++)
		;
	for (; s2[len2] != '\0'; len2++)
		;
	/* allocate memory for the concatenate string */
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	/* return NULL if malloc fails */
	if (str == NULL)
		return (NULL);
	/* iterate through strings and */
	/* copy them into the allocated memory */
	for (; i1 < len1; i1++)
	{
		str[i1] = s1[i1];
	}
	for (; i2 < len2; i2++, i1++)
	{
		str[i1] = s2[i2];
	}
	str[len1 + len2] = '\0';
	return (str + '\0');
}
