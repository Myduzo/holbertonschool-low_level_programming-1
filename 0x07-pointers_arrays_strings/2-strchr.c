#include "holberton.h"

/**
 * *_strchr - function locates a char in a string
 * @s: letters
 * @c: letters
 * Description: Returns pointer to the first occurrence of char in a string
 * Return: Pointer to char
 */
char *_strchr(char *s, char c)
{
    /* declare iteration variable */
	int iterate;

	/* declare temporary pointer */
	char *locate = s;

	/* look through the entire string to the null */
	for (iterate = 0; s[iterate] != '\0'; iterate++)
	{
		/* find char in string */
		if (s[iterate] == c)
		{
			/* take the memory address of the char */
			locate = &s[iterate];
			/* returns pointer to char */
			return (locate);
		}
	}
	/* returns null */
	return ('\0');
}
