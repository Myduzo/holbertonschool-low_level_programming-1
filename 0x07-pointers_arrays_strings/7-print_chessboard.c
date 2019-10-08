#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: letters
 * Description: Prints the letters on the chessboard
 * Return: N/A
 */
void print_chessboard(char (*a)[8])
{
    /* declare iteration variables */
	int iterate1;
	int iterate2;

	/* loop through the rows of the array */
	for (iterate1 = 0; iterate1 < *a[iterate1]; iterate1++)
	{
		/* loop through the columns of the array */
		for (iterate2 = 0; iterate2 < 8; iterate2++)
		{
			/* print the rows and columns */
			_putchar(a[iterate1][iterate2]);
		}
		/* print new line */
		_putchar('\n');
	}
}
