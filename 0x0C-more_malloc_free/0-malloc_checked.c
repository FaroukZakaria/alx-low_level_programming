#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - s
 * @b: s
 * Return: how return when it's void???
 */
void *malloc_checked(unsigned int b)
{
	void *a;
		a = malloc(b);
		if (a == NULL)
		{
			exit(98);
		}
		return (a);
}
