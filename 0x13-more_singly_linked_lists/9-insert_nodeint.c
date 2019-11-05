#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of list
 * @idx: index of list where the new node will be added
 * @n: integer type
 * Return: if successful, returns address of new node or if fail, returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iterate = 1;
	/* allocate memory for new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	/* if malloc fails, return NULL */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 1)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (*head != NULL)
	{
		if (iterate == idx)
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		iterate++;
		*head = (*head)->next;
	}
	return (NULL);
}
