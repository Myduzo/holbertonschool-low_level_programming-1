#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of argument types
 * Description: 3. To be is a to be the value of a variable
 * This program will print any data type follow by a new line.
 * Return: N/A
 */
void print_all(const char * const format, ...)
{
	const char *ptr;

	va_list argList;

	va_start(argList, format);
	while (!ptr)
	{
		ptr = va_arg(argList, char*);
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(argList, int));
				break;
			case 'i':
				printf("%d", va_arg(argList, int));
				break;
			case 'f':
				printf("%f", va_arg(argList, double));
				break;
			case 's':
			{
				if (format == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
			}
			default:
				ptr = 0;
				break;
		}
		ptr++;
		printf(", ");
	}
	va_end(argList);
	printf("\n");
}
