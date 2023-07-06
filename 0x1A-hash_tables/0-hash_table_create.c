#include "hash_tables.h"
/**
 * hash_table_create - s
 * @size: s
 * Return: s
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);
	hash->size = size;
	(hash->array) = malloc(size * sizeof(hash_node_t *));
	if (hash->array == NULL)
		return (NULL);
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
