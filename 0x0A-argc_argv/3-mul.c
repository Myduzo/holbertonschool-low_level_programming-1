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
	/* declare print variable */
	int product;

	/* if there are two arguments */
	/* need to account for the first element */
	if (argc == 3)
	{
		{
			/* multiple the second & third arguments */
			/* atoi converts str to int */
			product = atoi(argv[1]) * atoi(argv[2]);
		}
		/* print the product */
		printf("%d\n", product);
	}
	/* if there's less than two arguments */
	/* need to account for the first element */
	else if (argc < 3)
	{
		/* then, print Error */
		printf("Error\n");
	}
	/* return 1 for Error */
	return (1);
}
