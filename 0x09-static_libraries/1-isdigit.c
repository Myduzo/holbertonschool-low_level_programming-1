#include "holberton.h"

/**
 * _isdigit - function checks for zero & positive int
 * @c: integers
 * Description: Returns the int using return statements
 * Return: 1 is a digit & 0 is not.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
