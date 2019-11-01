#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters
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
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to head of list
 * @str: string to duplicate
 * Return: address of the new element or if fail, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	/* declare variables for new elements */
	char *new_str;
	unsigned int new_len;
	list_t *new_node;
	/* duplicate string */
	new_str = strdup(str);
	/* find length of new string */
	new_len = _strlen(new_str);
	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	/* return NULL if malloc fails */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* put new elements into new node */
	new_node->str = new_str;
	new_node->len = new_len;
	new_node->next = *head;
	/* move head to point to new node */
	*head = new_node;
	/* return address to new node */
	return (*head);
}
