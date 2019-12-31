#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head of list
 * Description: 6. Pop
 * Return: see below
 * 1. upon success, return data of head
 * 2. upon fail or empty list, return 0
 */
int pop_listint(listint_t **head)
{
	/* declare variable to point to head node */
	listint_t *current;
	int iterate = 0;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	while (iterate)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
		}
		if (*head)
		{
			*head = current->next;
			free(current);
		}
		current = current->next;
		iterate++;
	}
	return (current->n);
}
