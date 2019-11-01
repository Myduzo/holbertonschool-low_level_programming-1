#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	/* declare variable and initialize it at NULL */
	list_t *temp = NULL;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
