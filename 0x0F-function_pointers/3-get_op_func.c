#include "3-calc.h"

/**
 * get_op_func - function that points to another function
 * @s: character type
 * Description: This program will select the correct
 * arithmetic function to perform.
 * Return: 0 for success
 */
int (*get_op_func(char *s))(int, int)
{
	/* given struct array */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/* initialized i to 0 */
	i = 0;
	/**
	 * if there are elements in the struct array
	 * iterate for the correct operation
	 * and match it to the passing operator
	 * also account for null byte
	 * return pointer to correct operation function
	 */
	while (ops[i].op != NULL)
	{
		if ((*ops[i].op == *s) && (!*(s + 1)))
		{
			return (ops[i].f);
		}
		i++;
	}
	/* return NULL if passing operator isn't in struct array */
	return (NULL);
}
