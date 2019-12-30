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
	dlistint_t *current = *head;
	unsigned int iterate = 0;
	/* if empty list */
	if (*head == NULL)
		return (-1);
	/* if head is to be deleted */
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/* if index is not out of range */
	/* if index is the last node */
	while ((iterate <= (index - 1)) && (current != NULL))
	{
		if ((current->next == NULL) && (iterate == (index - 1)))
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}
		if (iterate == (index -1))
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		iterate++;
	}
	return (-1);
}
