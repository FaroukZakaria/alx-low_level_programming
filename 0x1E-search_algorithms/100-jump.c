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
	int i = 0, step = sqrt((int)(size));

	if (array == NULL)
		return (-1);
	while ((i < (int)(size)))
	{
		if ((array[i]) >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}
	i -= step;
	printf("Value found between indexes [%d] and [%d]\n", array[i], i + step);
	while (array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i++] == value)
			return (value);
	}
	return (-1);
}
