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
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to head of list
 * @n: element of integer type
 * Return: see below
 * 1. upon success, address of the new element
 * 2. upon fail, NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare variable for new node */
	dlistint_t *new_node;
	/* declare variable to iterate to last node */
	dlistint_t *last = *head;
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
	/**
	 * 1. if list is empty, then new node is head
	 * 2. point new node next to head
	 * 3. point new node prev from NULL to the new node
	 * 4. set new node as head
	 * 5. return address of the new element
	 */
	if (*head == NULL)
	{
		new_node->next = *head;
		new_node->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	/**
	 * 1. iterate to the end of the list
	 * 2. point current node next to new node
	 * 3. point new node prev to current node
	 * 4. return address of the new element
	 */
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
