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
	/* BASE CASE */
	/* if there is only one char */
	if (n == i)
	{
		/* then, it's still a palindrome */
		return (1);
	}
	/* if first & last chars don't match */
	if (s[n] != s[i])
	{
		/* then, return 0 because no match found */
		return (0);
	}
	/* if there's more than 2 chars */
	if (n < i + 1)
	{
		/* recurse from start and end of line */
		return (helper(s, n + 1, i - 1));
	}
	/* return 1 if all else fails */
	return (1);
}

/**
 * is_palindrome - function that cheks for a palindrome string
 * @s: characters
 * Description: check for a palindrome string
 * Return: 1 for palindrome & 0 is not
 */
int is_palindrome(char *s)
{
	/* initialize n to get the length of the string */
	int n = _strlen_recursion(s);
	/* check from 0 */
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
