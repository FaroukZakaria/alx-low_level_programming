#include "main.h"
#include <stddef.h>
/**
 * print_binary - s
 * @n: s
 * Return: s
 */
void print_binary(unsigned long int n)
{
	unsigned long int value = 1;

	while (value <= (n >> 1))
	{
		value <<= 1;
	}
	while (value > 0)
	{
		if (n & value)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		value >>= 1;
	}
}
