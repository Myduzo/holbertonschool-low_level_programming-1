#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: characters
 * Description: Prints a string in reverse
 * Return: Always 0 is success
 */
void rev_string(char *s)
{
	int len;
	int count;

	char *start;
	char *end;
	char ph;

	len = _strlen(s);
	start = s;
	end = s;

	for (count = 0; count < len - 1; count++)
	{
		end++;
	}
	for (count = 0; count < len / 2; count++)
	{
		ph = *end;
		*end = *start;
		*start = ph;

		start++;
		end--;
	}
}

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: Always 0 is success
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}
