#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a DLL
 * @head: pointer to head of DLL
 * @n: element of integer type
 * Description: 3. Add node at the end
 * Return: see below
 * 1. upon success, address of the new element
 * 2. upon fail, NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare variable for new node */
	dlistint_t *new_node;
	/* declare variable to iterate to end */
	dlistint_t *current = *head;
	/* allocate memory for new node but if malloc fails, return NULL */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* create new node, point to NULL after it and point to NULL before it */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/**
	 * 1. if there's an empty list, set new node as head and return its address
	 * 2. point new node next to head and new node prev from NULL to the new node
	 * 3. set new node as head and return address of the new element
	 */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/**
	 * 1. iterate to the end of the list
	 * 2. point current node next to new node and new node prev to current node
	 * 3. return address of the new element
	 */
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->prev = current;
	current->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
