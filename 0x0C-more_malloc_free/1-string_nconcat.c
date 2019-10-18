#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: byte
 * Description: Lookup man strcat for reference
 * Return: NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i1 = 0, i2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[len1] != '\0'; len1++)
		;
	for (; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (; i1 < len1; i1++)
	{
		str[i1] = s1[i1];
	}
	for (; i2 <= n; i2++, i1++)
	{
		str[i1] = s2[i2];
	}
	str[len1 + n] = '\0';
	return (str + '\0');
}
