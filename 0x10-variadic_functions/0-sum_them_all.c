#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * @n: integer type
 * Description: 0. Beauty is variable, ugliness is constant
 * This program will return the sum of all its parameters.
 * Return: 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declare iteration variable and return variable */
	unsigned int i = 0;
	unsigned int sum = 0;
	/* declare a va_list type variable */
	va_list argList;
	/* use int parameter and va_start to initialize va_list variable */
	va_start(argList, n);
	/* if n is 0, return 0 */
	if (n == 0)
	{
		return (0);
	}
	/* iterate all arguments assigned to argList */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argList, const unsigned int);
	}
	/* clean memory reserved for argList */
	va_end(argList);
	/* return the sum */
	return (sum);
}
