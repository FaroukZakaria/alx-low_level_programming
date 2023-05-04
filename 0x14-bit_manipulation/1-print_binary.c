#include "main.h"
#include <stddef.h>
/**
 * print_binary - s
 * @n: s
 * Return: s
 */
void print_binary(unsigned long int n)
{
	int result = 0, value = 1;

	while (n != 0)
	{
		if (n & 1)
		{
			result += value;
		}
		result >>= 1;
		value <<= 1;
	}
	return (result);
}
