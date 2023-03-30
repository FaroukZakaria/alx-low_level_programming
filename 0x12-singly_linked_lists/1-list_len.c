#include "lists.h"
#include <stdlib.h>
/**
 * list_len - s
 * @h: s
 * Return: s
 */
size_t list_len(const list_t *h)
{
	int i;
		while (h)
		{
			i++;
			h = h->next;
		}
		return (i);
}
