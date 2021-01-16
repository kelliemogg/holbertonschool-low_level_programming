#include "hash_tables.h"

/**
 * hash_table_set - add an element
 * description: adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with a key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	idx = key_index((unsigned char *)(key), ht->size);
	new = ht->array[idx];
	if (!new)
		return (0);
	else
		return (1);
}
