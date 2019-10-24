#include "3-calc.h"

/**
 * main - function for executing arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: This program will print the result of
 * an arithmetic operation
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	/* declare function pointer */
	int (*result)(int, int);

	/* if number of argc is wrong, print Error & exit */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* assign function pointer to function */
	result = get_op_func(argv[2]);
	/* if operator is not found, print Error & exit */
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* if trying to divide by 0, print Error & exit */
	/* can also write argv[2][0] */
	if ((atoi(argv[3]) == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	/* print result of arithmetic operation */
	/* result converts argv to int type */
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
