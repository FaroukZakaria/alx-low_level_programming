#include <stdlib.h>
#include "main.h"
/**
 * create_array - a
 * @size: s
 * @c: c
 * Return: and leaves, just like yo da-
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
		array = malloc(size * sizeof(char));
		}
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
}
