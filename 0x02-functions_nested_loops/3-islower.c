#include "holberton.h"

/**
 * int _islower(int c) - prototype
 *
 * Description: _islower(int c).
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
