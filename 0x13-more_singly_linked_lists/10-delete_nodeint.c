#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * @head: pointer to head of list
 * @index: index of node that will be deleted
 * Return: if successful, return 1 or if fail, return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* declare variable to hold pointer before free */
	listint_t *temp = *head;
	listint_t *next;
	/* declare iteration variable */
	unsigned int iterate = 0;
	/* if empty, return -1 */
	if (*head == NULL)
		return (-1);
	/* if head is the only node in list */
	/* then, free it */
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	/* point to the node before the node to be deleted */
	while (temp != NULL && iterate < index - 1)
		temp = temp->next;
		iterate++;
	/* if given index is more than the number of nodes */
	/* then, return -1 */
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	/* hold pointer to the next node to be deleted */
	/* free the node */
	/* unlink deleted node from list */
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
