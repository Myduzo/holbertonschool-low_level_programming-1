#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare and initialize variable as head */
	listint_t *pointer;
	/* declare variable to point to the next node */
	listint_t *temp;
	/**
	 * 1. if the value in the head is not NULL, 
	 * 2. then, set pointer to head
	 * 3. iterate till NULL
	 * 4. moving pointer to the next node
	 * 5. freeing each node as it iterates
	 * 6. set pointer to temp which would be at NULL
	 * 7. set head to NULL
	 */
	if (head)
	{
		pointer = *head;
		while (pointer != NULL)
		{
			temp = pointer->next;
			free(pointer);
			pointer = temp;
		}
		*head = NULL;
	}
}
