#include "variadic_functions.h"

/**
 * print_numbers - function that prints integers
 * @separator: string between integers
 * @n: number of integers
 * Description: 1. To be is to be the value of a variable
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
	/* if there's no argument, print new line only */
	if (n == 0)
	{
		printf("\n");
	}
	/* if there's only one argument, print it & new line */
	if (n == 1)
	{
		printf("%d\n", va_arg(argList, int));
	}
	/* if there's no separator but there are arguments */
	/* if there's a separator and arguments */
	if (n >= 2)
	{
		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(argList, int));
			}
			if (separator)
			{
				printf("%d", va_arg(argList, int));
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		printf("\n");
	}
	/* clean memory reserved for argList */
	va_end(argList);
}
