#include "hash_tables.h"
/**
 * key_index - s
 * @key: s
 * @size: s
 * Return: s
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
