#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a DLL
 * @h: pointer to head of DLL
 * Description: 1. List length
 * Return: see below
 * 1. upon success, return the number of nodes
 * 2. upon fail, return nothing
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* declare iteration variable */
	int iterate = 0;
	/**
	 * 1. if there's a head, then, iterate through DLL
	 * 2. move to the next node
	 * 3. iterate through DLL
	 */
	while (h)
	{
		h = h->next;
		iterate++;
	}
	/* return the number of nodes */
	return (iterate);
}
