#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table in order
 * @ht: pointer to the hash table
 * Description: 5. >>> print(ht)
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	/* declare variable for index & pointer to it */
	unsigned long int index = 0;
	hash_node_t *current = NULL;
	/* if hash table is NULL, don't print anything */
	if (ht == NULL)
	{
		;
	}
	/* set pointer to the index */
	current = ht->array[index];
	/* iterate through the linked list and print if not NULL */
	while (index < ht->size)
	{
		if (current != NULL)
		{
			printf("%s: %s", current->key, current->value);
		}
		index++;
	}
	printf("\n");
}
