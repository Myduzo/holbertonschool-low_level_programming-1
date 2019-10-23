#include "function_pointers.h"

/**
 * array_iterator - function that executes another function
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 * Description: 1. If you spend too much time thinking
 * about a thing, you'll never get it done.
 * This program will execute another function to print
 * elements of an array.
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterate;

	if (array && action)
	{
		for (iterate = 0; iterate < size; iterate++)
		{
			action(array[iterate]);
		}
	}
}
