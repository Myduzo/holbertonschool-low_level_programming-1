#include "holberton.h"

/**
 * *_strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Description: Lookup man strcmp for reference
 * Return: Integer <, =, > if first string is found
 */
int _strcmp(char *s1, char *s2)
{
	/* declared counters */
	char count1, count2;

	/* get the length of both strings) */
	while ((count1 = *s1++) == (count2 = *s2++))
	{
		/* return 0 when string is empty */
		if (count1 == '\0')
		return (0);
	}
	/* return the difference of two strings */
	return (count1 - count2);
}
