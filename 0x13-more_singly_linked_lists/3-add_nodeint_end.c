#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to head of list
 * @n: constant integer type
 * Return: if successful, address of the new element or if fail, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare variable to iterate to last node */
	listint_t *last = *head;
	/* declare variable for new node */
	/* allocate memory for new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	/* return NULL if malloc fails */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* put new element into new node */
	new_node->n = n;
	/* since new node is last, make whatever comes after it NULL */
	new_node->next = NULL;
	/* if list is empty, then new node is head */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/* iterate to the last node of the current list */
	while (last->next != NULL)
	{
		last = last->next;
	}
	/* add the new node as the last node */
	last->next = new_node;
	/* return address to the new node */
	return (new_node);
}
