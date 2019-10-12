#include "holberton.h"

/**
 * _islower - function to check for lowercase
 * @c: characters
 * Description: Checks for lowercase using return statements
 * Return: 1 is a success & 0 is a fail
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
