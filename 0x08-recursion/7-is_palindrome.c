#include "holberton.h"

/**
 * helper - helper function
 * @n: integers
 * @i: integers
 * @s: characters
 * Description: helps with incrementation
 * Return: N/A
 */
int helper(char *s, int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (s[n] != s[i])
	{
		return (0);
	}
	if (n < i + 1)
	{
		return (helper(s, n + 1, i - 1));
	}
	return (1);
}

/**
 * is_palindrome - function that cheks for a palindrome string
 * @s: characters
 * Description: check for a palindrome string
 * Return: 1
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}
	return (helper(s, 0, n - 1));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return ((1) + _strlen_recursion(s + 1));
	}
}
