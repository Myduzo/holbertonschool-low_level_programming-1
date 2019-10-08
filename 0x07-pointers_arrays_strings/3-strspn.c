#include "holberton.h"

/**
 * _strspn - function that searches a string for a set of bytes (length)
 * @s: letters
 * @accept: letters
 * Description: Returns the # of bytes in the initial segment of s
 * which consist only of bytes from accept
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
    /* declare iteration variables */
	int iterate1;
	int iterate2;

	/* declare an incrementation variable */
	unsigned int numOfbytes = 0;

	int len = _strlen(accept);

	/* look through the entire string until null byte */
	for (iterate1 = 0; s[iterate1] != '\0'; iterate1++)
	{
		/* look through the entire string until null byte */
		for (iterate2 = 0; iterate2 <= len; iterate2++)
		{
			/* if the string matches one of the bytes in accept */
			if (s[iterate1] == accept[iterate2])
			{
				numOfbytes++;
				break;
			}
			if (accept[iterate2] == '\0')
			{
				return (numOfbytes);
			}
		}
	}
	return (numOfbytes);
}

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: Always 0 is success
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
