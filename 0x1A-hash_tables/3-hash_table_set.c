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
	hash_node_t *new, *tmp;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;
	printf("This is key = [%s].\n This is value = [%s]\n", key, value);

	idx = key_index((const unsigned char *)(key), ht->size);
	printf("This index = [%lu]\n", idx);
	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		tmp = ht->array[idx];
		new->next = tmp;
		tmp->next = NULL;
		ht->array[idx] = new;
	}
	return (1);
}
