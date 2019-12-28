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
	unsigned int i;
	/* declare a va_list type variable */
	va_list argList;
	/* use va_start to initialize the va_list variable */
	va_start(argList, n);
	/* if there's no arguments, then print new line */
	if (n == 0)
	{
		printf("\n");
	}
	/**
	 * 1. if there are arguments, iterate through them
	 * 2. if there's a separator, print args & sep
	 * 3. if separator is 0, print args only
	 * 4. if separator is NULL, print args only
	 */
	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			if (separator)
			{
				printf("%d", va_arg(argList, int));
			}
			if ((separator != NULL) && (i < (n - 1)))
			{
				printf("%s", separator);
			}
			if (((separator == 0) || (separator == NULL)) && (i < (n - 1)))
			{
				printf("%d", va_arg(argList, int));
			}
		}
		printf("\n");
	}
	/* clean memory reserved for argList */
	va_end(argList);
}
