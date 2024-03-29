#include "hash_tables.h"
/**
 * hash_table_get - s
 * @ht: s
 * @key: s
 * Return: s
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) != 0)
		node = node->next;
	return (node->value);
}
