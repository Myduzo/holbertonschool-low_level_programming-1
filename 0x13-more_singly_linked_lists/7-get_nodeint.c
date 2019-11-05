#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head of list
 * @index: index of the node, starting at 0
 * Return: if node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare and initialize iteration variable */
	unsigned int iterate = 0;
	/**
	 * iterate until...
	 * it's at the index of the current node,
	 * return the data at the nth node
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
	/* if node does not exist, return NULL */
	return (NULL);
}
