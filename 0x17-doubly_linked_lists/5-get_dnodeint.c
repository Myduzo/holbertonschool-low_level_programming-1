#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL
 * @head: pointer to head of DLL
 * @index: index of the node to return
 * Description: 5. Get node at index
 * Return: see below
 * 1. upon success, returns the address of the nth node
 * 2. upon fail or if node doesn't exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* declare and initialize iteration variable */
	unsigned int iterate = 0;
	/**
	 * 1. iterate through DLL
	 * 2. when it's at the desired index
	 * 3. return the address at the nth node
	 */
	while (head != NULL)
	{
		if (iterate == index)
		{
			return (head);
		}
		iterate++;
		head = head->next;
	}
	/* all else, return NULL */
	return (NULL);
}
