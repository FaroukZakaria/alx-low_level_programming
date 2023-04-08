#include "main.h"
/**
 * clear_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1UL << index);

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (!(*n & mask))
	{
		*n &= mask;
	}
	return (1);
}
