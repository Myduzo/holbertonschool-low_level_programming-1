#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table and
 * in case of collision, a new element is always added to the beginning
 * @ht: pointer to the hash table
 * @key: key cannot be an empty string
 * @value: value can be an empty string & must be duplicated
 * Description: 3. >>> ht['betty'] = 'holberton'
 * Return: see below
 * 1. upon success, 1
 * 2. upon fail, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declare pointers for linked list & variable for index */
	hash_node_t *new_node = NULL, *current = NULL;
	unsigned long int index;
	/* if hash table or key is not valid */
	if ((ht == NULL) || (key == NULL))
		return (0);
	/* create a node for new key/value pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	/* find index the key/value pair should be inserted into */
	index = key_index((const unsigned char *)key, ht->size);
	/* set pointer to the index */
	current = ht->array[index];
	/* iterate through linked list */
	while (current != NULL)
		current = current->next;
	/* if index is found, then update it */
	if (current != NULL)
		current->value = strdup(value);
	/* if index can't be found, then insert at head */
	if ((current == ht->array[index]) && (current == NULL))
	{
		new_node->next = current;
		current = new_node;
		return (1);
	}
	free(new_node);
	return (0);
}
