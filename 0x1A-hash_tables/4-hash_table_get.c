#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * description: function to get a value associated with a certain key
 * @ht: hash table
 * @key: key
 * Return: value associated with the element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *finder;

	if (!ht || !key)
		return (NULL);
	idx = (hash_djb2((unsigned char *) key) % ht->size);
	finder = ht->array[idx];
	if (!finder)
		return (NULL);
	while (finder->next != NULL)
	{
		if (strcmp(finder->key, key) == 0)
			return (finder->value);
		finder = finder->next;
	}
	if (strcmp(finder->key, key) == 0)
		return (finder->value);
	else
		return (NULL);
}
