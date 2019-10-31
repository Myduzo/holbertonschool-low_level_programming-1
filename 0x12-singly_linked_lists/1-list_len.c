#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	/* declare iteration variable */
	int i = 0;
	/* if pointer is not at NULL */
	/* then, iterate through list */
	while (h)
	{
		/* move pointer */
		h = h->next;
		/* iterate through list */
		i++;
	}
	/* return the number of nodes */
	return (i);
}
