#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - s
 * @b: s
 * Return: how return when it's void???
 */
void *malloc_checked(unsigned int b)
{
	malloc(b);
	if (malloc(b) == NULL)
	{
		return (98);
	}
	return (malloc(b));
}
