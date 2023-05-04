#include "main.h"
#include <stddef.h>
/**
 * get_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 1 << index;

	return ((n & i) != 0);
}
