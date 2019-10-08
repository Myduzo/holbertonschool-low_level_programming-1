#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: letters
 * @to: letters
 * Description: Work with double pointers
 * Return: N/A
 */
void set_string(char **s, char *to)
{
	/* double pointer **s -> *s -> Asaia */ 
	/* pointer *to -> Anne */
	/* be careful not to dereference the original pointer */
	/* to has to point to *s */
	*s = to;
}
