#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that points to another function
 * @s: character type
 * Description: This program will select the correct 
 * arithmetic function to perform.
 * Return: 0 for success
 */
int (*get_op_func(char *s))(int, int)
{
	if (s != op_t)
	{
		return (NULL);
	}
}
