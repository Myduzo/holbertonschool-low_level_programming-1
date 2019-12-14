#include "lists.h"

/**
 * free_dlistint - function that frees a DLL
 * @head: pointer to head of DLL
 * Description: 4. Free list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	/* declare variable to hold head during iteration */
	dlistint_t *current;
	/**
	 * 1. iterate through DLL till NULL
	 * 2. free the nodes along the way
	 * 3. free the head
	 */
	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
