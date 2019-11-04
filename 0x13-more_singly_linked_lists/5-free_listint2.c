#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/* declare variable to hold dereferenced head */
	listint_t *next;
	/**
	* iterate through the linked link till NULL
	* freeing the head as it moves
	* do not need to free integer type
	*/
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	/* set dereferenced head to NULL */
	*head = NULL;
}
