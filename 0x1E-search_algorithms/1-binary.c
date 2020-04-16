#include "search_algos.h"

/**
 * binary_search - function that retrieves a value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: element to search for
 * Description: 1. Binary search
 * Return: see below
 * upon success, return index where value is located
 * upon fail, return -1 if array is NULL or no match
 */
int binary_search(int *array, size_t size, int value)
{
	/* declare iteration variables */
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	/* if there's no array */
	if (array == NULL)
		return (-1);

	/**
	 * 1. find the middle element
	 * 2. if value is less than middle element
	 * 3. if value is greater than middle element
	 * 4. if value is the middle element
	 * 5. keep comparing until left = right
	 */
	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, size);
		mid = left + (right - left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	/* if no match found, return -1 */
	return (-1);
}

/**
 * print_array - function that prints an array
 * @array: the array to be printed
 * @size: number of elements
 */
void print_array(int *array, size_t size)
{
	size_t iterate;

	iterate = 0;
	while (array && (iterate < size))
	{
		if (iterate > 0)
			printf(", ");
		printf("%d", array[iterate]);
		iterate++;
	}
	printf("\n");
}
