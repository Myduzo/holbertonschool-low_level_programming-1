#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	/**
	 * iterate through the linked link till NULL
	 * free strings along the way
	 * then, free the head
	 */
	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
