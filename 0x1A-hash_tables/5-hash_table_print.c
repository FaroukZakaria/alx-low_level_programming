#include "hash_tables.h"
/**
 * hash_table_print - s
 * @ht: s
 * Return: s
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size && ht->array[i]; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (ht->array[i + 1] != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
