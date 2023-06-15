#include "lists.h"
/**
 * delete_dnodeint_at_index - s
 * @head: s
 * @index: s
 * Return: s
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = *head, *after, *before;

	while (i < index)
	{
		if (cur == NULL)
			return (0);
		cur = cur->next;
		i++;
	}
	after = cur->next;
	before = cur->prev;
	free(cur);
	before->next = after;
	after->prev = before;
	return (1);
}
