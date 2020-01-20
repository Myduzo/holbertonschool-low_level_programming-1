#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table in order
 * @ht: pointer to the hash table
 * Description: 5. >>> print(ht)
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	/* declare variable for index */
	unsigned long int index = 0;
	/* if hash table is NULL, don't print anything */
	if (ht == NULL)
	{
		printf("{}\n");
	}
	/* iterate through the linked list & print if not NULL */
	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				printf("'%s': ", ht->array[index]->key);
				printf("'%s', ", ht->array[index]->value);
			}
			if ((ht->array[index] != NULL) && (index == ht->size - 1))
			{
				printf("'%s': ", ht->array[index]->key);
				printf("'%s'", ht->array[index]->value);
			}
			index++;
		}
		printf("}\n");
	}
}
