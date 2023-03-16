#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a
 * @nmemb: s
 * @size: s
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *k;
		if (nmemb == 0 || size == 0)
			return (NULL);
		j = nmemb * size;
		k = malloc(j);
		if (k == NULL)
			return (NULL);
		while (i < j)
		{
			k[i] = 0;
			i++;
		}
		return (k);
}
