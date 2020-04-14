#include "search_algos.h"

/**
 * linear_search - function that retrieves a value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: element to search for
 * Description: 0. Linear search
 * Return: see below
 * upon success, return first index where value is located
 * upon fail, return -1 if array is NULL or no value
 */
int linear_search(int *array, size_t size, int value)
{
	/* declare iteration variable */
	size_t iterate = 0;

	/* if there's no array */
	if (array == NULL)
		return (-1);

	/* iterate through array to find value */
	for (; iterate < size; iterate++)
	{
		printf("Value checked array[%d] = [%d]\n",
				(int)iterate, (int)array[iterate]);
		if (array[iterate] == value)
			return (iterate);
	}

	/* if no match found, return -1 */
	return (-1);
}
