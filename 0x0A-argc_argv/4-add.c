#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that sums two positive integers
 * Return: 1 is for Error & 0 is for Success
 */
int main(int argc, char *argv[])
{
	/* declare counters */
	int iterate1;
	int iterate2;

	/* declare sum to start summing at zero */
	int sum = 0;

	/* if no number is passed through  */
	if (argc < 0)
	{
		/* then, print zero */
		printf("0\n");
	}
	/* iterate through all numbers that are passed through  */
	for (iterate1 = 1; iterate1 < argc; iterate1++)
	{
		/* sum the array */
		/* atoi converts str to int */
		sum += atoi(argv[iterate1]);
		/* for edge case purpose, create a 2D array */
		/* iterate through all numbers of both arrays */
		for (iterate2 = 0; argv[iterate1][iterate2] != '\0'; iterate2++)
		{
			/* if a non-digit is found */
			if (!isdigit(argv[iterate1][iterate2]))
			{
				/* print Error */
				printf("Error\n");
				/* return 1 for error */
				return (0);
			}
		}
	}
	/* print the sum */
	printf("%d\n", sum);
	/* return 0 for success */
	return (0);
}
