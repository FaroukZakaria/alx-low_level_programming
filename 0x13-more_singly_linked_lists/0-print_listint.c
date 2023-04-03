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
	while (h)
	{
		printf("%d", h->n);
		h->next;
	}
	return (h);
}
