#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of list
 * @idx: index of list where the new node will be added
 * @n: integer data in node
 * Return: if successful, returns address of new node or if fail, returns NULL
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
	if (new == NULL)
	{
		return (NULL);
	}
	/* if malloc'ed successfully, set new data into new node */
	new->n = n;
	/* if index is 1 (head) then, set new node as head */
	if (idx == 1)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	/* 1. traverse to the node before index (idx - 1) */
	/* 2. move temporarily pointer to point to (idx - 1) */
	for (; iterate < (idx - 1); iterate++)
	{
		temp = temp->next;
	}
	/* have new node point to the same node as (idx - 1) */
	/* which is the node after index (idx + 1) */
	new->next = temp->next;
	/* point (idx - 1) to the new node */
	temp->next = new;
	/* return address of new node */
	return (new);
}
