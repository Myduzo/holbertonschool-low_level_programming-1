#include "holberton.h"

/**
 * _isalpha - function to check for letter
 * @c: characters
 * Description: Checks for lowercase using return statements
 * Return: 1 is a success & 0 is a fail
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
