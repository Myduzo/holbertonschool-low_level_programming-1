#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head of list
 * Description: 6. Pop
 * Return: see below
 * 1. upon success, return data of head
 * 2. upon fail or empty list, return 0
 */
int pop_listint(listint_t **head)
{
	/* declare variable to point to head node */
	listint_t *current;
	/* declare variable to hold data that would be deleted */
	int data;
	/* if list is empty */
	if (*head == NULL)
	{
		return (0);
	}
	/**
	 * 1. initialize current to head node
	 * 2. store head node's data into variable
	 * 3. move head to the next node
	 * 4. free node and return data
	 */
	if (*head)
	{
		current = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(current);
	}
	return (data);
}
