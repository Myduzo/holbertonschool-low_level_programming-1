#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare variable to move pointer and store it */
	listint_t *pointer;
	listint_t *temp;
	/**
	 * 1. if head is not NULL, then set pointer to head
	 * 2. iterate till NULL
	 * 3. move pointer to next node
	 * 4. free each node
	 * 5. set pointer to temp which would be at NULL
	 */
	if (*head != NULL)
	{
		pointer = *head;
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
