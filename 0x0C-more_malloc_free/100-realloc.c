#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - s
 * @ptr: s
 * @old_size: s
 * @new_size: s
 * Return: s
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i;
		if (new_size == old_size)
		{
			retrun (ptr);
		}
		if (ptr == NULL)
		{
			a = malloc(new_size);
			if (a == NULL)
			{
				return (NULL);
			}
			return (a);
		}
		else
		{
			if (new_size == 0)
			{
				free(ptr);
				return (NULL);
			}
		}
		a = malloc(new_size);
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			a[i] = ((char *) ptr)[i];
		}
		free(ptr);
		return (a);
}
