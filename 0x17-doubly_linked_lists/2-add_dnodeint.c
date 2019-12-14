#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a DLL
 * @head: pointer to head of DLL
 * @n: element of integer type
 * Description: 2. Add node
 * Return: see below
 * 1. upon success, address of the new element
 * 2. upon fail, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare a variable for new node */
	dlistint_t *new_node;
	/**
	 * 1. allocate memory for new node
	 * 2. if malloc fails, return NULL
	 */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/**
	 * 1. create the new node
	 * 2. point to NULL after it
	 * 3. point to NULL before it
	 * 4. if there's an empty list, set new node as head and return its address
	 * 5. point new node to head
	 * 6. point head to new node
	 * 7. set new node as head
	 * 8. return address of the new element
	 * 9. all else, return NULL
	 */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	*head = new_node;
	return (*head);
}
