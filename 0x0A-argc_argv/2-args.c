#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that prints all arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* declare a counter */
	int iterate;

	/* if there is something in the array of strings */
	/* other than the program name */
	if (argc > 0)
	{
		/* loop through the array of strings */
		for (iterate = 0; iterate < argc; iterate++)
		{
			/* prints all the arguments that's passed through */
			printf("%s\n", argv[iterate]);
		}
	}
	/* returns nothing if successful */
	return (0);
}
