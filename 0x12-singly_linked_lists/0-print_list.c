#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - s
 * @h: s
 * Return: s
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
		while (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			nodes++;
		}
		return (nodes);
}
