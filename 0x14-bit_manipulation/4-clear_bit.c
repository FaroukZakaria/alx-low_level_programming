#include "main.h"
/**
 * clear_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, i;
	
	mask = 1UL << index;
	i = *n;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	
	if (i & mask)
	{
		i = i ~ mask;
		*n = i;
	}
	return (1);
}
