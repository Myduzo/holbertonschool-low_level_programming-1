#include "holberton.h"

/**
 * *rot13 - function that encodes a string every 13th place
 * @encode: letters and integers
 * Description: Encode with integers
 * Return: encryption
 */
char *rot13(char *encode)
{
	/* declare counter variable */
	int count1;
	int count2;

	/* declare arrays */
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";

	/* loop through the string until null */
	for (count1 = 0; encode[count1] != '\0'; count1++)
	{
		/* loop through to mix the alpha to the string */
		for (count2 = 0; encode[count2] != '\0'; count2++)
		{
			if (upper[0] == encode[13])
			{
				encode[13] = lower[0];
			}
		}
	}
	/* returns encrytion */
	return (encode);
}
