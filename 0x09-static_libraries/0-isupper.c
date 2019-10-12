#include "holberton.h"

/**
 * _isupper - function to check for uppercase
 * @c: characters
 * Description: Checks for uppercase using return statements
 * Return: 1 is a success & 0 is a fail
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
