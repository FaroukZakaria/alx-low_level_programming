#include "main.h"
#include <stdlib.h>
/**
 * array_range - s
 * @min: s
 * @max: s
 * Return: s
 */
int *array_range(int min, int max)
{
	int j = 0;
	char *i;
		if (min > max)
			return (NULL);
		i = malloc(sizeof(int) * max);
		if (i == NULL)
			return (NULL);
		while (min < max)
		{
			i[j] = min;
			min++;
		}
		return (i);
}
