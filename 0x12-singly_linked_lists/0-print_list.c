#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	/* declare pointer to head of list */
	const list_t *temp = h;
	/* declare iterator variable */
	int i = 0;
	/* if pointer is not at NULL */
	/* then, iterate through list */
	while (temp)
	{
		/* if pointer is at NULL */
		/* then, print nil */
		if (temp->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			/* print after iteration */
			printf("[%u] %s", temp->len, temp->str);
		}
		/* move pointer */
		temp = temp->next;
		/* print new line after printing the elements */
		printf("\n");
		/* iterate through list */
		i++;
	}
	/* return the number of nodes */
	return (i);
}
