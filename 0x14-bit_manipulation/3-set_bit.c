#include "main.h"
/**
 * set_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	unsigned long int i = *n;

	if (!(i & mask))
	{
		i |= mask;
		*n = val;
	}
	return (1);
}
