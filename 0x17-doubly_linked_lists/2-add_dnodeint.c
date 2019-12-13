#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;
	unsigned int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to head of list
 * @n: element of integer type
 * Return: see below
 * 1. upon success, address of the new element
 * 2. upon fail, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare variables for new elements */
	dlistint_t *new_node;
	/* allocate memory for new node */
	/* return NULL if malloc fails */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* create the new node */
	new_node->n = n;
	/* point right to NULL */
	new_node->next = NULL;
	/* point left to NULL */
	new_node->prev = NULL;
	/* point new node to head */
	new_node->next = *head;
	/* point head to new node */
	new_node->prev = new_node;
	/* set new node as head */
	*head = new_node;
	/* return address of the new element */
	return (new_node);
}
