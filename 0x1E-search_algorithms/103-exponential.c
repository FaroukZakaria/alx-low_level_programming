#include "search_algos.h"
#include <math.h>
/**
 * exponential_search - Searches exponentially
 * Description: doubles the number until it becomes more or equal to value
 * @array: the array
 * @size: the elements
 * @value: the target
 * Return: index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0;

	if (array == NULL || array[size - 1] < value)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] >= value || i >= size)
		{
			i = pow(2, j - 1);
			printf("Value found between indexes [%lu] and [%lu]\n", i, size);
			return(c_binary_search(array, size, i, value));
		}
		j++;
		i *= 2;
	}
	return (-1);
}
/**
 * c_binary_search - Searches through an array by neglecting a half
 *                 and narrowing down the results
 * @array: the array to be searched in
 * @size: the number of integers in the array
 * @value: the number to be searched for
 * @low: the custom start position from previous function
 * Return: the value, otherwise -1
 */
int c_binary_search(int *array, size_t size, size_t low, int value)
{
	size_t i, high, mid, flag = 0;

	if (array == NULL)
		return (-1);
	high = (size) - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (flag == 1)
				printf(", ");
			if (flag == 0)
				flag = 1;
			printf("%lu", i);
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
		flag = 0;
	}
	return (-1);
}
