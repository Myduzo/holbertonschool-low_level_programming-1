#include "holberton.h"

/**
 * *string_toupper - function that changes lowercase letters to uppercase
 * @lower: letters
 * Description: Change the case of letters
 * Return: Uppercase letters
 */
char *string_toupper(char *lower)
{
	/* declare counter variable */
	int count;

	/* loop to the null */
	for (count = 0; lower[count] != '\0'; count++)
	{
		/* if string has lower cases from a - z */
		if (lower[count] >= 'a' && lower[count] <= 'z')
		{
			/* jumps from 97 to 65 on the ASCII */
			lower[count] = lower[count] - 32;
		}
	}
	/* returns the string */
	return (lower);
}
