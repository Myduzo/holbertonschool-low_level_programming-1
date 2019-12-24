#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head of list
 * Return: see below
 * 1. upon success, return data of head
 * 2. upon fail, return 0
 */
int pop_listint(listint_t **head)
{
	/* declare variable to point to head node */
	listint_t *current = *head;
	/* if it's an empty list, return 0 */
	if (*head == NULL)
		return (0);
	/**
	 * 1. move head pointer to point to the next node
	 * 2. free current pointer that points to head
	 * 3. return data of old head
	 */
	*head = current->next;
	free(current);
	return (current->n);
}
