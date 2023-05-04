#include "main.h"
/**
 * get_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 1 << index;
	int j = (n & i) >> index;

	if (i > n || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (j);
}
