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
	dlistint_t *tmp = *h, *last;

	if (tmp == NULL || node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		if (idx > 0)
			return (NULL);
		node->n = n;
		node->prev = NULL;
		node->next = NULL;
		*h = node;
		return (node);
	}
	while (i <= idx)
	{
		if ((tmp == NULL) && i == idx)
		{
			node->n = n;
			node->prev = last;
			last->next = node;
			node->next = NULL;
			return (node);
		}
		if (tmp->next == NULL)
			last = tmp;
		tmp = tmp->next;
		i++;
	}
	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
