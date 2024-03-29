#include "search_algos.h"
/**
 * linear_search - Searches linearly through an array
 *
 * @array: the list of numbers
 * @size: number of elements
 * @value: the value to be searched for
 * Return: the first instance of the required value or -1 if failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
		return (-1);
	for (i = 0; i < (size); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
