#include "main.h"
/**
 * flip_bits - s
 * @n: s
 * @m: s
 * Return: s
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;

	i = n ^ m;
	while (i)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
