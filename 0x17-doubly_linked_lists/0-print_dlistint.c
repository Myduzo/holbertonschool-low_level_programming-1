#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a DLL
 * @h: pointer to head of DLL
 * Description: 0. Print list
 * Return: see below
 * 1. upon success, return number of nodes
 * 2. upon fail, nothing
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* declare iteration variable */
	int iterate = 0;
	/**
	 * 1. if there's a head, then, iterate through DLL
	 * 2. if there's no element inside head, then, print nil
	 * 3. if there's an element inside head, then, print it
	 * 4. move to the next node
	 * 5. iterate through DLL
	 * 6. print new line after printing an element
	 */
	while (h)
	{
		if (h == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%d", h->n);
		}
		h = h->next;
		printf("\n");
		iterate++;
	}
	/* return the number of nodes */
	return (iterate);
}
