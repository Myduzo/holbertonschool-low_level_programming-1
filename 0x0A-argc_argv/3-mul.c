#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two integers
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that multiples two integers
 * Return: 1 is for Error
 */
int main(int argc, char *argv[])
{
	/* declare counters */
	int iterate = 1;
	int product = 1;

	/* if there are two arguments */
	if (argc >= 2)
	{
		/* take in the passing integers */
		for (; iterate < argc; iterate++)
		{
			/* multiple them */
			/* atoi converts str to int */
			product *= atoi(argv[iterate]);
		}
		/* print the product */
		printf("%d\n", product);
	}
	/* if there's less than two arguments */
	else if (argc < 3)
	{
		/* then, print Error */
		printf("Error\n");
	}
	/* return 1 for Error */
	return (1);
}
