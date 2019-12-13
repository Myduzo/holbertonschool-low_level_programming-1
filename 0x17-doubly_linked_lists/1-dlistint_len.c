#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* declare iteration variable */
	int iterate = 0;
	/* if there's a head, then, iterate through list */
	while (h)
	{
		/* move pointer */
		h = h->next;
		/* iterate through list */
		iterate++;
	}
	/* return the number of nodes */
	return (iterate);
}
