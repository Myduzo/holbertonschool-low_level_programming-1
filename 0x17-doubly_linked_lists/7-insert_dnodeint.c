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
	/* declare variable for new node */
	dlistint_t *new_node;
	/* declare variable to hold head */
	dlistint_t *current = *h;
	/* declare variable to iterate to index to insert new node */
	unsigned int iterate = 0;
	/* allocate memory for new node but if it fails, return NULL */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* create new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* if DLL is empty or index is more than the number of nodes, return NULL */
	if ((current == NULL) || (current->next == NULL))
		return (NULL);
	/* if index is head then, set new node as head */
	if (idx == 0)
	{
		new_node->next = current;
		*h = new_node;
		return (new_node);
	}
	/**
	 * 1. traverse to the node before index
	 * 2. point new node to the node before index
	 * 3. point to new node
	 * 4. return address of new node
	 */
	while (iterate < (idx - 1))
	{
		current = current->next;
		iterate++;
	}
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
