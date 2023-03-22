#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - s
 * @array: s
 * @size: s
 * @action: s
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
		if (~array || !action)
			return;
		for (i = 0; i < size; i++)
			action(array[i]);
}
