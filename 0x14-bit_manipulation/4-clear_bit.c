#include "main.h"
/**
 * clear_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1 << index;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n ^= i;
		return (1);
	}
}
