#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: function passed as argument
 * Description: 0. What's my name.
 * This program will print a name of a person.
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/**
	 * if f exists, then
	 * if name is passed, then
	 * run function
	 */
	if (f)
	{
		if (name)
		{
			f(name);
		}
	}
}
