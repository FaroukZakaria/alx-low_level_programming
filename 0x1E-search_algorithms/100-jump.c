#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Jumps few blocks until it finds or surpasses target and
 *               goes back slower steps to get it
 * @array: the array to be searched in
 * @size: number of elements
 * @value: the target
 * Return: the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step = sqrt((size));

	if (array == NULL || size == 0)
		return (-1);
	while ((i < (size)) && (array[i] < value))
	{
		if ((array[i]) >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}
	i -= step;
	printf("Value found between indexes [%d] and [%lu]\n", array[i], i + step);
	if (i >= size || array[i] > value)
		return (-1);
	while (array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
