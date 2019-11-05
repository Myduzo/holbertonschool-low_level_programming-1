#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * @head: pointer to head of list
 * @index: index of node that will be deleted
 * Return: if successful, return 1 or if fail, return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next;
	
	unsigned int iterate = 0;

	if (*head == NULL)
		return (-1);
		
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && iterate < index - 1)
		temp = temp->next;
		iterate++;
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
