#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of list
 * @idx: index of list where the new node will be added
 * @n: integer data in node
 * Return: below
 * 1. upon success, returns address of new node
 * 2. upon fail, returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declare variable to iterate to index to insert new node */
	unsigned int iterate = 0;
	/* declare variable to temporarily point to head */
	listint_t *temp = *head;
	/* declare variable to allocate memory for new node */
	listint_t *new = malloc(sizeof(listint_t));
	/* if malloc fails, return NULL */
	if (!new)
	{
		return (NULL);
	}
	/* if malloc'ed successfully, set new data into new node */
	new->n = n;
	/* if list is empty or index is more than the number of nodes, return NULL */
	if ((!temp) || (!idx))
	{
		return (NULL);
	}
	/* if index is head then, set new node as head */
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	/* traverse to the node before index (idx - 1) */
	/* move temporarily pointer to point to (idx - 1) */
	while (iterate < (idx - 1))
	{
		temp = temp->next;
		iterate++;
	}
	/* have new node point to the same node as (idx - 1) */
	/* which is the node after index (idx + 1) */
	new->next = temp->next;
	/* point (idx - 1) to the new node */
	temp->next = new;
	/* return address of new node */
	return (new);
}
