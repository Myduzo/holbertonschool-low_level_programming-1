#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D array
 * @grid: array of integers
 * @height: integers
 * Description: 4. It's not bragging if you can back it up
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	/* declare variable for iteration */
	int iterate;
	/* iterate through array and free each element */
	for (iterate = 0; iterate < height; iterate++)
	{
		free(grid[iterate]);
	}
	/* free all grid */
	free(grid);
}
