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
	unsigned long int i = 1 << index;

	if (i > n || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & i) != 0);
}
