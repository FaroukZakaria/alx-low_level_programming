#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_binary - s
 * @n: s
 * Return: v
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			j = 1;
		}
		else if (j)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
