#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head of list
 * Return: below
 * 1. upon success, return data of head
 * 2. upon fail, return 0
 */
int pop_listint(listint_t **head)
{
	/* declare variable to point to head node */
	listint_t *pointer;
	/* if empty, return 0 */
	if (*head == NULL)
		return (0);
	/**
	 * 1. if the list is not empty
	 * 2. assign first node to pointer
	 * 3. the next node will become the new head
	 * 4. free the head
	 * 5. return data of old head
	 */
	if (*head != NULL)
	{
		pointer = *head;
		*head = (*head)->next;
		free(pointer);
	}
	return (pointer->n);
}
