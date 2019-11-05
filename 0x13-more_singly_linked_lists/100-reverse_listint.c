#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: pointer to head of list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	/* declare variables to point to NULL */
	listint_t *previous = NULL;
	listint_t *next = NULL;
	/**
	 * iterate till NULL
	 * move next pointer to the node after head
	 * link the first node to NULL
	 * set previous pointer to head
	 * set had to next pointer
	 * eventually, head and next pointer will point to the old NULL
	 */
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	/* set pointer to first node and return it */
	*head = previous;
	return (previous);
}
