#include "holberton.h"

/**
 * *rot13 - function that encodes a string
 * @encode: letters and integers
 * Description: ROT13 ("rotate by 13 places")
 * Return: encryption
 */
char *rot13(char *encode)
{
	/* declare counter variables */
	int count1;
	int count2;

	/* declare arrays */
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* loop through the string until null */
	for (count1 = 0; encode[count1] != '\0'; count1++)
	{
		/* loop through to 51 because it's 2x the alphabet less the null */
		for (count2 = 0; count2 <= 51; count2++)
		{
			/* if the index of the string is equivalent to the input) */
			if (encode[count1] == input[count2])
			{
				/* set the index of the string to the out array */
				encode[count1] = output[count2];
				/* stop it from looking for other equivalence */
				break;
			}
		}
	}
	/* returns encrytion */
	return (encode);
}
