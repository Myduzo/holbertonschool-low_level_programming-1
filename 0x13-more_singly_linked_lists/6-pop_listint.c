#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to head of list
 * Return: if successful, data or if fail, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		*head = (*head)->next;
		free(temp);
		return ((*head)->n);
	}
}
