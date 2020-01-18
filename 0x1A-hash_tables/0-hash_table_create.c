#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Description: 0. >>> ht = {}
 * Return: see below
 * upon success, pointer to the newly created hash table
 * upon fail, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare variables for iteration and hash table */
	unsigned long int iterate = 0;
	hash_table_t *the_table = NULL;
	/* if there's no valid size, return NULL */
	if (size <= 0)
	{
		return (NULL);
	}
	/* allocate memory for hash table */
	the_table = malloc(sizeof(hash_table_t));
	if (the_table == NULL)
	{
		return (NULL);
	}
	/* allocate memory for array */
	the_table->array = malloc(sizeof(hash_node_t) * size);
	if (the_table->array == NULL)
	{
		return (NULL);
	}
	/* assign the size to the array */
	the_table->size = size;
	/* set NULL into each entry */
	for (; iterate < size; iterate++)
	{
		the_table->array[iterate] = NULL;
	}
	/* return pointer to hash table */
	return (the_table);
}
