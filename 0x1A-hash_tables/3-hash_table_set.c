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
	int idx = 0;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
}
	
}
