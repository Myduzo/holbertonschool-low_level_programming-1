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
 * add_dnodeint - function that adds a new node at the beginning of a DLL
 * @head: pointer to head of DLL
 * @n: element of integer type
 * Description: 2. Add node
 * Return: see below
 * 1. upon success, address of the new element
 * 2. upon fail, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare a variable for new node */
	dlistint_t *new_node;
	/**
	 * 1. allocate memory for new node
	 * 2. if malloc fails, return NULL
	 */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/**
	 * 1. create the new node
	 * 2. point to NULL after it
	 * 3. point to NULL before it
	 * 4. point new node to head
	 * 5. point head to new node
	 * 6. set new node as head
	 * 7. return address of the new element
	 * 8. all else, return NULL
	 */
	if (head)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->next = *head;
		new_node->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
