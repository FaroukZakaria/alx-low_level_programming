#include "main.h"
#include <string.h>
/**
 * print_binary - s
 * @n: s
 * Return: v
 */
void print_binary(unsigned long int n)
{
	int i, mask = 1 << 7;

	for (i = 0; i < 8; i++)
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
}
