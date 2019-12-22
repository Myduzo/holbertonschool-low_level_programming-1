#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: pointer to head of DLL
 * @idx: index of DLL where the new node will be added
 * @n: integer data in node
 * Description: 7. Insert at index
 * Return: see below
 * 1. upon success, returns address of new node
 * 2. upon fail, returns NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int iterate = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* if index is head, then, set new node as head */
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	/* if next node is not NULL & points to the node before insertion */
	/* if pointer is at the node before insertion */
	while ((iterate <= (idx - 1)) && (current != NULL))
	{
		if ((current->next == NULL) && (iterate == (idx - 1)))
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		if (iterate == (idx - 1))
		{
			new_node->prev = current;
			new_node->next = current->next;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		iterate++;
	}
	free(new_node);
	return (NULL);
}
