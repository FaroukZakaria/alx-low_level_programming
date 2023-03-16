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
	int *i;
		if (min > max)
		{
			return (NULL);
		}
		i = malloc((sizeof(int) * (max - min)) + sizeof(int));
		if (i == NULL)
		{
			return (NULL);
		}
		while (min <= max)
		{
			i[j] = min;
			j++;
			min++;
		}
		return (i);
}
