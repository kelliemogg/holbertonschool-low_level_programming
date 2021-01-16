#include "hash_tables.h"

/**
 * hash_table_print - prints a ht
 * description: prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	char *key = 0;
	char *value = 0;

	if (ht == NULL)
		return;
	printf("{}\n{");
	printf("%s: %s,", key, value);
	printf("}");
}
