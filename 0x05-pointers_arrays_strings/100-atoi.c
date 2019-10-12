#include "holberton.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: character string
 * Description: Converts string to integer
 * Return: Integers
 */
int _atoi(char *s);
{
	int iterate;
	int integer = 0;

	if (s[iterate] == '\0')
	{
		return (0);
	}
	for (iterate = 0; s[iterate] != '\0'; ++iterate)
	{
		integer = integer * 10 + s[iterate] - '0';
	}
	return (integer);
}
