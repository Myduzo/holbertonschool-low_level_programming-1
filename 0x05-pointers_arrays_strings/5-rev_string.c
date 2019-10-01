#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: characters
 * Description: Reverses a string
 * Return: Always 0 is success
 */
void rev_string(char *s)
{
	char reverse;
	int start = 0;
	int end = 10;

	reverse = s[start];
	s[start] = s[end];
	s[end] = reverse;
	start++;
	end--;
}
