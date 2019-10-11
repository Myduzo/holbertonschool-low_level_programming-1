#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that prints the number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* void unused parameter argv */
	(void)argv;

	/* prints the number of arguments that's passed through */
	/* -1 is to not count the program name (first element) */
	printf ("%d\n", argc - 1);
	
	/* returns nothing if successful */
	return (0);
}
