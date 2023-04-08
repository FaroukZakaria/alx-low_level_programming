#include "main.h"
/**
 * get_bit - s
 * @n: s
 * @index: s
 * Return: s
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	int i = (n & mask) >> index;
	return (i);
}
