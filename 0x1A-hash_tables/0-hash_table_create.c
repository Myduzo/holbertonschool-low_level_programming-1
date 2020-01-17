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
	unsigned long int iterate;
	hash_table_t *the_hash;

	/* allocate memory for hash table */
	the_hash = malloc(sizeof(hash_table_t));
	if (the_hash == NULL)
	{
		return (NULL);
	}

	/* allocate memory for array entries */
	the_hash->array = malloc(sizeof(hash_table_t) * size);

	/* set NULL into each entry */
	for (iterate = 0; iterate < size; iterate++)
	{
		the_hash->array[iterate] = NULL;
	}

	/* return pointer to hash table */
	return (the_hash);
}
