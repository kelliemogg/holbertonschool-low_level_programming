#include "hash_tables.h"

/**
 * shash_table_create - create a hash table
 * description: function to create a hash table
 * @size: size of array
 * Return: ptr or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_t = NULL;

	h_t = malloc(sizeof(hash_table_t));
	if (!h_t)
		return (NULL);
	h_t->array = malloc(sizeof(hash_node_t *) * size);
	h_t->size = size;
	if (!h_t->array)
		return (NULL);
	return (h_t);
}

/**
 * shash_table_set - adds an element to the hash table
 * description: adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with a key
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *new = NULL, *tmp = NULL;

	if (!ht || !key || !value || strcmp(key, "") == 0)
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

	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		tmp = ht->array[idx];
		new->next = tmp;
		ht->array[idx] = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value
 * description: function to get a value associated with a certain key
 * @ht: hash table
 * @key: key
 * Return: value associated with the element or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t *finder;

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

/**
 * shash_table_print - print hash table
 * description: this function prints the keys and values of ht
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node && node->next != NULL)
		{
			printf("%s: %s,", node->key, node->value);
			node = node->next;
		}
		else
			printf("%s: %s", node->key, node->value);
	}
	printf("}");
}

/**
 * shash_table_print_rev - reverse print
 * description: prints key/values in reverse order
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void) *ht;
	return;
}

/**
 * shash_table_delete - delete table
 * description: delete key/values, hash table, ht->array
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp = NULL;
	unsigned long int idx;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
