#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: len of string
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcat - function that concatnates
 * @dest: destination string
 * @src: source string
 * Description: Lookup man strcat for reference
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	char *append = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (append);
}

/**
 * argstostr - function that concatenates all arguments
 * @ac: number of arguments
 * @av: arguments
 * Description: 5. It isn't the mountains ahead to
 * climb that wear you out; it's the pebble in your shoe
 * Return: see below
 * 1. upon success, returns pointer to new string
 * 2. upon fail, returns NULL
 */
char *argstostr(int ac, char **av)
{
	/* declare and initialize iterators */
	int iterate1 = 0, iterate2 = 0;
	/* declare and initialize variable to store length for malloc */
	int len = 0;
	/* declare pointer to return */
	char *string;
	/* if no arguments are given, return NULL */
	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	/* find length of arguments */
	for (; iterate1 < ac; iterate1++)
	{
		len += _strlen(av[iterate1]);
	}
	/* allocate memory for arguments */
	string = malloc(len + ac + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	/* store arguments as a string in a pointer */
	for (; iterate2 < ac; iterate2++)
	{
		_strcat(string, av[iterate2]);
		_strcat(string, "\n");
	}
	/* return pointer */
	return (string);
}
