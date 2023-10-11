#include "search_algos.h"
/**
 * interpolation_search - Searches by interpolation
 * Description: More effective than binary search
 * @array: the array
 * @size: the elements
 * @value: the value to be searched
 * Return: the index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = array[size - 1];
	size_t a = (high - low);
	size_t b = (array[high] - array[low]);
	size_t c = (value - array[low]);
	size_t pos = low + (((double)a / b) * c);

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
