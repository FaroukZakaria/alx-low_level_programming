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
	dlistint_t *tmp = *h;

	if (tmp == NULL || node == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	node->n = n;
	tmp->next->prev = node;
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	return (tmp);
}
