#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - s
 * @b: s
 * Return: s
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k, len, result = 0;
	int j;
		if (b == NULL)
		{
			return (0);
		}
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
		}
		for (len = 0; b[len] != '\0';)
		{
			len++;
		}
		for (j = len - 1, k = 0; j >= 0; j--, k++)
		{
			if (b[j] == '1')
			{
				result += (1u << k);
			}
		}
	return (result);
}
