#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * @head: pointer to head of list
 * @index: index of node that will be deleted
 * Return: if successful, return 1 or if fail, return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* declare variable pointers to free later */
	listint_t *pointer = *head;
	listint_t *temp;
	/* declare iteration variable */
	unsigned int iterate = 0;
	/* if index is more than the number of nodes */
	/* then, return -1 */
	if (pointer == NULL || pointer->next == NULL)
		return (-1);
	/* if empty, return -1 */
	if (*head == NULL)
		return (-1);
	/* if head is the only node, then free it */
	if (index == 0)
	{
		*head = pointer->next;
		free(pointer);
		return (1);
	}
	/* point to the node before the node to be deleted */
	while ((pointer != NULL) && (iterate < index - 1))
	{
		pointer = pointer->next;
		iterate++;
	}
	/**
	 * 1. hold pointer to the next node to be deleted
	 * 2. unlink deleted node from list
	 * 3. free pointers
	 */
	temp = pointer->next->next;
	free(pointer->next);
	pointer->next = temp;
	return (1);
}
