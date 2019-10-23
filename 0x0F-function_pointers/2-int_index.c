#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Description: 2. To hell with circumstances; I create opportunities.
 * This program will execute another function to search for an integer.
 * Return: -1 for no match && size is 0 or less
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* declare iteration variable */
	int iterate;

	/* if size is 0 or less, return -1 */
	if (size <= 0)
	{
		return (-1);
	}
	/* if array and cmp exists, return the index */
	if (array && cmp)
	{
		/* loop through the array */
		for (iterate = 0; iterate < size; iterate++)
		{
			/* if index is found, return it */
			if (cmp(array[iterate]))
			{
				return (iterate);
			}
		}
	}
	/* if no match, return -1 */
	return (-1);
}
