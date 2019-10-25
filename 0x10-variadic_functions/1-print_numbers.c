#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: special characters
 * @n: integer type
 * Description: 1. To be is to be the value of a variable
 * This program will print numbers separated by
 * special characters follow by a new line.
 * Return: N/A
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare iteration variable */
	unsigned int i;
	/* declare a va_list type variable */
	va_list argList;
	/* use int parameter and va_start to initialize the va_list variable */
	va_start(argList, n);
	/**
	 * iterate all arguments
	 * print number and then, print separator
	 * if separator is not NULL, print
	 */
	for (i = 0; i < n; i++)
	{		
		printf("%d", va_arg(argList, int));
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%c ", *separator);
		}
	}
	/* clean memory reserved for argList */
	va_end(argList);
	/* print new line */
	printf("\n");
}
