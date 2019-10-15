#include "header.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of change
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: Prints the minimum number of change
 * for any amount of money
 * Return: 1 is for Error & 0 is for Success
 */
int main(int argc, char *argv[])
{
	/* array of the type of coins */
	int coins[5] = {25, 10, 5, 2, 1};
	/* iterate through the coins array */
	int iterate = 0;
	/* how many coins used to make change */
	int min = 0;
	/* convert the argument to integers */
	int cents = atoi(argv[1]);

	/* if number of arguments is not 1 */
	if (argc > 2)
		printf("Error\n");
		return (1);
	/* if the argument is negative */
	if (cents < 0)
		printf("0\n");
		return (0);
	/**
	 * iterate 5 times for each type of coin
	 * subtract the type of coin from the argument
	 * if there's still cents left, iterate again
	 * until there's no more
	 */
	for (; iterate < 5;)
	{
		if (cents >= coins[iterate])
		{
			cents -= coins[iterate];
			min++;
		}
		iterate++;
	}
	printf("%d\n", min);
	return (0);
}
