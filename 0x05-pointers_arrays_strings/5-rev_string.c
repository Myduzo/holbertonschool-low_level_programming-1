#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: characters
 * Description: Prints a string in reverse
 * Return: Always 0 is success
 */
void rev_string(char *s)
{
	char reverse;
	int start = 0;
	int end = '\0';

	s[start] = s[end];
	reverse = s[start];
	s[end] = reverse;
	start--;
}
