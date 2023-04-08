#include "main.h"
/**
 * flip_bits - s
 * @n: s
 * @m: s
 * Return: s
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, j = 0;

	while (n)
	{
		n >>= 1;
		i++;
	}
	while (m)
	{
		m >>= 1;
		j++;
	}
	if (i > j)
	{
		return (i - j);
	}
	else
	{
		return (j - i);
	}
}
