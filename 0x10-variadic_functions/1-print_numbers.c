#include "variadic_functions.h"

/**
 * print_numbers - function that prints integers
 * @separator: string between integers
 * @n: number of integers
 * Description: 1. To be is to be the value of a variable
 * This program will print numbers separated by
 * special characters follow by a new line.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare iteration variable */
	unsigned int iterate;
	/* declare a va_list type variable */
	va_list argList;
	/* use va_start to initialize the va_list variable */
	va_start(argList, n);
	/* if int parameter is 0 or NULL, return nothing */
	if (n == 0)
	{
		printf("\n");
	}
	/**
	 * 1. iterate through all arguments
	 * 2. print integers and then, print separator
	 * 3. if separator is not NULL, print it
	 */
	if (n >= 1)
	{
		for (iterate = 0; iterate < n; iterate++)
		{
			printf("%d", va_arg(argList, int));
			if ((separator) && (iterate != (n - 1)))
			{
				printf("%c", *separator);
			}
		}
		printf("\n");
	}
	/* clean memory reserved for argList */
	va_end(argList);
}
