#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * description: function to create a hash table
 * @size: size of the array
 * Return: ptr or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t = NULL;

	h_t = malloc(sizeof(hash_table_t));
	if (!h_t)
		return (NULL);
	h_t->array = malloc(sizeof(hash_node_t) * size);
	h_t->size = size;
	if (!h_t->array)
		return (NULL);
	return (h_t);
}
