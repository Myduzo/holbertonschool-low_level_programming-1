#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns pointer to 2D array
 * @width: array of integers
 * @height: array of integers
 * Description: Stores the address of 2D array
 * Return: NULL for fail
 */
int **alloc_grid(int width, int height)
{
	/* declare a double pointer for 2D array */
	int **grid;
	/* declare iteration variables */
	int row, col;
	/* make sure there's no zeros or negatives */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate memory for integer type pointers */
	grid = malloc(sizeof(int *) * height);
	/* return NULL if malloc fails */
	if (grid == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		/* allocate memory for a signle pointer */
		grid[row] = malloc(sizeof(int) * width);
		/* if the row has nothing */
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
			{
				/* free allocated memory of rows */
				free(grid[row]);
			}
			/* free all allocated memory */
			free(grid);
			return (NULL);
		}
	}
	/* form 2D aray */
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
		}
	}
	return (grid);
}
