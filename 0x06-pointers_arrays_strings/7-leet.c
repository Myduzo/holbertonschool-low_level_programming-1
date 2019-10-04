#include "holberton.h"

/**
 * *leet - function that encodes a string
 * @encode: letters and integers
 * Description: Encode with integers
 * Return: encryption
 */
char *leet(char *encode)
{
	/* declare counter variables */
	int count1;
	int count2;

	/* declare arrays */
	int numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int alphas[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	/* loop through the string until null */
	for (count1 = 0; encode[count1] != '\0'; count1++)
	{
		/* loop through to mix the alpha to the string */
		for (count2 = 0; count2 <= 9; count2++)
		{
			/* replace char in string that matches the alphas */
			if (encode[count1] == alphas[count2])
			{
				/* replace one for one */
				encode[count1] = numbers[count2];
			}
		}
	}
	/* returns encrytion */
	return (encode);
}
