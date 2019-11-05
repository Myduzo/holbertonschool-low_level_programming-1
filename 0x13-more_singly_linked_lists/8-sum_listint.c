#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a linked list
 * @head: pointer to head of list
 * Return: if successful, returns sum or if fail, returns NULL
 */
int sum_listint(listint_t *head)
{
	/* declare and initialize a variable to hold the sum */
	int sum = 0;
	/* if there's a list */
	if (head)
	{
		/* move pointer until NULL */
		while (head != NULL)
		{
			/* add data that's in current node */
			/* move pointer to the next node */
			sum += head->n;
			head = head->next;
		}
		/* return the sum */
		return (sum);
	}
	/* if empty, return NULL */
	return (0);
}
