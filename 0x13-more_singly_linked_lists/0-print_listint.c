#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list_int - s
 * @h: s
 * Return: s
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
		return (i);
}
