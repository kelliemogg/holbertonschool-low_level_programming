#include "hash_tables.h"

/**
 * key_index - index for the key
 * description: write a func giving the indx of a key
 * @key: key
 * @size: size of the array of the hash table
 * Returns: indx where the key exists
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
