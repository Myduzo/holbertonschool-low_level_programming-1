#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data in a DLL
 * @head: pointer to head of DLL
 * Description: 6. Sum list
 * Return: see below
 * 1. upon successful, returns sum
 * 2. upon fail, returns 0
 */
int sum_dlistint(dlistint_t *head)
{
	/* declare and initialize a variable to hold the sum */
	int sum = 0;
	/**
	 * 1. if there's a list
	 * 2. iterate until NULL
	 * 3. add data that's in current node
	 * 4. then, move to the next node
	 * 5. return sum
	 */
	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	/* all else, return 0 */
	return (0);
}
