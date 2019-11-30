#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head of list
 * Return: if successful, data of head or if fail, 0
 */
int pop_listint(listint_t **head)
{
	/* declare variable to point to head node */
	listint_t *pointer = *head;
	/* if empty, return 0 */
	if (*head == NULL)
		return (0);
	/* if head is the only node in list */
	/* then, return data of head */
	if ((*head)->next == NULL)
		return (pointer->n);
	/**
	 * 1. if the list is not empty
	 * 2. assign first node to pointer
	 * 3. the next node will become the new head
	 * 4. free the head
	 * 5. return data of old head
	 */
	*head = (*head)->next;
	free(pointer);
	return (pointer->n);
}
