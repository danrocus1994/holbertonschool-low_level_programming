#include "hash_tables.h"
/**
 *hash_table_set - set value at table
 *@ht: the table
 *@key: the key
 *@value: the value
 *Return: 1 if success 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *nod;
	unsigned long int index;

	if (!ht | !key | !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	nod = ht->array[index];
	while (nod)
	{
		if (strcmp((const char *) key, nod->key) == 0)
		{
			free(nod->value);
			nod->value = strdup(value);
			return (1);
		}
		nod = nod->next;
	}
	new_node = malloc(sizeof(hash_node_t *));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
