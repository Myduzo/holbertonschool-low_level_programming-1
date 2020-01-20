#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 * Description: 6. >>> del ht
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	/* declare variable for index & pointer to it */
	unsigned long int index = 0;
	hash_node_t *current = ht->array[index];

	/* iterate through linked list to free it */
	while (current != NULL)
	{
		current = ht->array[index]->next;
		free(ht->array[index]->value);
		free(ht->array[index]->key);
		free(ht->array[index]);
		ht->array[index] = current;
	}
	/* free array and hash table */
	free(ht->array);
	free(ht);
}
