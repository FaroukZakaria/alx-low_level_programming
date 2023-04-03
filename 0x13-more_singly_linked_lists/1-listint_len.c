#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - s
 * @h: s
 * Return: s
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + listint_len(h->next));
	}
}
