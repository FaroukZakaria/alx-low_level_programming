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

	if (ht == NULL || value == NULL || key == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i] != NULL; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(val);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val);
		free(node);
		return (0);
	}
	node->value = val;
	ht->array[index] = node;
	return (1);
}
