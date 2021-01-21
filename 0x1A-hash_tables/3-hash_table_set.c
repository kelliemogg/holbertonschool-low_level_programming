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
	hash_node_t *new = NULL, *tmp = NULL;

	if (!key || !value || strcmp(key, "") == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	value = strdup(value);
	key = strdup(key);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;

	idx = key_index((const unsigned char *)(key), ht->size);

	if (ht->array[idx] == NULL || strcmp(key, key))
		ht->array[idx] = new;
	else
	{
/* need for loop to look through linked list to check for matching keys */
		tmp = ht->array[idx];
		new->next = tmp;
		ht->array[idx] = new;
	}
	return (1);
}
