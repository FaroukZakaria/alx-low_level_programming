#include "search_algos.h"
/**
 * binary_search - Searches through an array by neglecting a half
 *                 and narrowing down the results
 * @array: the array to be searched in
 * @size: the number of integers in the array
 * @value: the number to be searched for
 * Return: the value, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid, flag = 0;

	if (array == NULL)
		return (-1);
	low = 0;
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
			printf("%ld", i);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (i);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		flag = 0;
	}
	return (-1);
}
