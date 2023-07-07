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

	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
