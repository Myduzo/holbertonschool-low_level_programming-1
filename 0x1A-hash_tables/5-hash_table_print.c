#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table in array order
 * @ht: pointer to the hash table
 * Description: 5. >>> print(ht)
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	/* declare variable for iteration */
	unsigned int iterate = 0;
	/* print nothing if hash table is NULL */
	if (ht == NULL)
	{
		;
	}
	/* iterate through the hash table to print each cell */
	for (; iterate < size; iterate++)
	{
		if (ht->array[iterate] != NULL)
		{
			printf("%s: %s", array[iterate].key, array[iterate].value);
		}
	}
}
