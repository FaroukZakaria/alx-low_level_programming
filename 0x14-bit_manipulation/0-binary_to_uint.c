#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * binary_to_uint - s
 * @b: s
 * Return: s
 */
unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1, sum = 0;
	int j, k = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] > '1' || b[j] < '0')
		{
			return (0);
		}
	}
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			sum += k;
		}
		k *= 2;
		i--;
	}
	return (sum);
}
