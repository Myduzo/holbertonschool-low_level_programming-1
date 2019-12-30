#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: pointer to head of DLL
 * @index: index of node that will be deleted
 * Description: 8. Delete at index
 * Return: see below
 * 1. upon success, return 1
 * 2. upon fail, return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* declare and initialize pointer to head */
	dlistint_t *current = *head;
	/* declare and initialize an iterator */
	unsigned int iterate = 0;
	/* if empty list */
	if (*head == NULL)
		return (-1);
	/* if head is to be deleted */
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	/**
	 * 1. iterate to node to be deleted
	 * 2. if index is out of range
	 * 3. if last node is to be deleted
	 * 4. if next node is not NULL, move pointer
	 * 5. if previous node is not NULL, move pointer
	 */
	while ((iterate < index) && (current != NULL))
	{
		current = current->next;
		iterate++;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL)
		current->prev->next = NULL;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
