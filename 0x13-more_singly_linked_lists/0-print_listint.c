#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* declare iteration variable */
	int iterate = 0;
	/* if there's a head */
	while (h)
	{
		/* then, print the element */
		printf("%d\n", h->n);
		/* move to the next node */
		h = h->next;
		/* iterate through list */
		iterate++;
	}
	/* return the number of nodes */
	return (iterate);
}
