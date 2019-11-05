#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare and initialize variable as head */
	listint_t *pointer = *head;
	/* declare variable to point to the next node */
	listint_t *temp;
	/**
	 * 1. if head there is a head, then, iterate till NULL
	 * 2. moving pointer to the next node
	 * 3. freeing each node as it iterates
	 * 4. set pointer to temp which would be at NULL
	 */
	if (*head)
	{
		while (pointer != NULL)
		{
			temp = pointer->next;
			free(pointer);
			pointer = temp;
		}
	}
	/* set head to NULL */
	*head = NULL;
}
