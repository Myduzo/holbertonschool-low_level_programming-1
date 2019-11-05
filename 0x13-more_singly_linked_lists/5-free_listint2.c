#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare variable to hold head */
	listint_t *temp = *head;
	/* declare variable to hold pointer before freeing */
	listint_t *hold;
	/* if head is empty, return nothing */
	if (*head == NULL)
	{
		return;
	}
	/**
	* iterate through the linked link till NULL
	* freeing nodes as it iterates
	* hold the pointer before it frees
	* assign the pointer to head
	* (do not need to free integer type)
	*/
	while (temp != NULL)
	{
		hold = temp->next;
		free(temp);
		temp = hold;
	}
	/* set head to NULL */
	*head = NULL;
}
