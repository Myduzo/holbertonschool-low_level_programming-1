#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* declare iteration variable */
	int iterate = 0;
	/* if there's a head, then, iterate through list */
	while (h)
	{
		/* if there's nothing inside head, then, print nil */
		if (h == NULL)
		{
			printf("(nil)");
		}
		else
		/* if there's an element inside head, print it */
		{
			printf("%d", h->n);
		}
		/* move pointer */
		h = h->next;
		/* print new line after printing an element */
		printf("\n");
		/* iterate through list */
		iterate++;
	}
	/* return the number of nodes */
	return (iterate);
}
