#include "hash_tables.h"

/**
 * shash_table_create - create a hash table
 * description: function to create a hash table
 * @size: size of array
 * Return: ptr or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	return (NULL);
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
	return (0);
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
	return;
}

/**
 * shash_table_print_rev - reverse print
 * description: prints key/values in reverse order
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
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
	return;
}
