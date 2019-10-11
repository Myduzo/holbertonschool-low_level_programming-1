#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that sums two positive integers
 * Return: 1 is for Error
 */
int main(int argc, char *argv[])
{
	/* declare counters */
	int iterate1;
	int iterate2;
	int sum = 0;

	if (argc < 0)
	{
		/* then, print zero */
		printf("0\n");
	}
	for (iterate1 = 1; iterate1 < argc; iterate1++)
	{
		/* sum them */
		/* atoi converts str to int */
		sum += atoi(argv[iterate1]);
		for (iterate2 = 0; argv[iterate1][iterate2] != '\0'; iterate2++)
		{
			if (!(isdigit(argv[iterate1][iterate2])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	/* print the sum */
	printf("%d\n", sum);
	return (0);
}
