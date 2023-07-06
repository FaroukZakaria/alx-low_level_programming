#include "hash_tables.h"
/**
 * hash_table_set - s
 * @ht: s
 * @key: s
 * @value: s
 * Return: s
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *val;
	unsigned long int i, index;

	if (ht == NULL || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	index = key_index((const unsigned char *key)key, ht->size);
	if (strcmp(index, 
