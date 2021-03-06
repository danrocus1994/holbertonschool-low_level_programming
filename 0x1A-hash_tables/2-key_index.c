#include "hash_tables.h"
/**
 *key_index - resolve index of a hash key
 *@key: the string_key
 *@size: the table size
 *Return: hast table index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key = hash_djb2(key) % size;

	return (hash_key);
}
