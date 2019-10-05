#include "holberton.h"

/**
 * cap_string - function that capitalizes all words
 * @caps: letters
 * Description: Capitalize properly
 * Return: string in caps
 */
char *cap_string(char *caps)
{
	/* declare counter variables */
	int count1;
	int count2;

	/* declare array */
	char special[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' '};

	/* loop through the string until null */
	for (count1 = 0; caps[count1] != '\0'; count1++)
	{
		/* loop through the special array */
		for (count2 = 0; special[count2] - 1 < 11; count2++)
		{
			/* change to cap at the first char or after special char */
			if ((count1 == 0) || (caps[count1] == '\0' && special[count2]))
			{
				/* match here */
				caps[count1] = special[count2];
			}
		}
	}
	/* returns string in caps */
	return (caps);
}
