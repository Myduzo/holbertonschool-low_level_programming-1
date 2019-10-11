#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Description: Write a program that prints its own name & new line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* void unused parameter argc */
	/* could also use (void)argv[argc-1]; */
	(void)argc;
	
	/* prints the program name */
	/* it's always the first element of the argv array */
	printf("%s\n", argv[0]);
	
	/* returns nothing if successful */
	return (0);
}
