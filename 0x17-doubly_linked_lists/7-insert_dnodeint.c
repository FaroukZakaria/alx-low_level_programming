#include "lists.h"
/**
 * insert_dnodeint_at_index - s
 * @h: s
 * @idx: s
 * @n: s
 * Return: s
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		*h = (*h)->next;
		i++;
	}
	(*h)->next->prev = node;
	node->next = (*h)->next;
	(*h)->next = node;
	node->prev = *h;
	return (*h);
}
