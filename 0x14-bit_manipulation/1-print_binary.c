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
	unsigned long int mask = 1UL << 31;
	int i;

	for (i = 0; i < 32; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	_putchar('\n');
}
