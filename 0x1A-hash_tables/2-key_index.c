#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 * @key: the given key
 * @size: size of the array
 * Description: 2. key -> index
 * Return: see below
 * upon success, the index where the key/value pair is stored
 * upon fail, nothing
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_pair;

	index_pair = (hash_djb2(key) / size);
	return (index_pair);
}
