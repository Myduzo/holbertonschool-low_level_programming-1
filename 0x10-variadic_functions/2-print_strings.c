#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: special characters
 * @n: integer type
 * Description: 2. One woman's constant is another woman's variable
 * This program will print strings separated by
 * special characters follow by a new line.
 * Return: N/A
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare iteration variable */
	unsigned int i;
	/* declare pointer to hold va_arg */
	char *ptr;
	/* declare a va_list type variable */
	va_list argList;
	/* use int parameter and va_start to initialize the va_list variable */
	va_start(argList, n);
	/**
	 * iterate all arguments
	 * print string and then, print separator
	 * if ptr finds a NULl string, print nil
	 * if separator is not NULL, print it
	 */
	for (i = 0; i < n; i++)
	{
		/* char* or char * is a char pointer */
		ptr = va_arg(argList, char*);
		if (ptr)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && (i < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	/* clean memory reserved for argList */
	va_end(argList);
	/* print new line */
	printf("\n");
}
