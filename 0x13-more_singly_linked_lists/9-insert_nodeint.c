#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of list
 * @idx: index of list where the new node will be added
 * @n: integer data in node
 * Description: 9. Insert
 * Return: see below
 * 1. upon success, returns address of new node
 * 2. upon fail, returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iterate = 0;
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* if new node is to be inserted at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* if new node is inserted in the middle or end */
	while ((iterate <= (idx - 1)) && (current != NULL))
	{
		if ((current->next == NULL) && (iterate == (idx - 1)))
		{
			new_node->next = NULL;
			current->next = new_node;
			return (new_node);
		}
		if (iterate == (idx - 1))
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		iterate++;
	}
	free(new_node);
	return (NULL);
}
