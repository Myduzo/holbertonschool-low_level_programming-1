#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to head of list
 * @n: constant integer
 * Return: if successful, address of the new element or if fail, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare variable for new node */ 
	/* allocate memory for new node */
  	listint_t *new_node = malloc(sizeof(listint_t));
  	/* return NULL if malloc fails */
  	if (new_node == NULL)
    {
      	return (NULL);
    }
  	/* put new element into new node */
  	new_node->n = n;
  	/* make new node head */
	new_node->next = *head;
	/* point head to new node */
  	*head = new_node;
  	/* return address to the head */
  	return (*head);
}
