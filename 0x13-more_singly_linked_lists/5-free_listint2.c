#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare variable to temporarily hold current pointer */
	listint_t *temp = *head;
	/* declare variable to hold dereferenced head */
	listint_t *next;
	/* if head is empty, return nothing */
	if (*head == NULL)
	{
		return;
	}
	/**
	* iterate through the linked link till NULL
	* freeing nodes as it iterates
	* do not need to free integer type
	*/
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	/* set dereferenced head to NULL */
	*head = NULL;
}
