#include "hash_tables.h"

/**
 * hash_table_print - prints a ht
 * description: prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
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
