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

	if (*head == NULL)
		return (-1);
	while (i < index)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
		i++;
	}
	if (i == index)
	{
		if (i == 0)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(cur);
			return (1);
		}
		if (cur->next == NULL)
		{
			cur->prev->next = NULL;
			free(cur);
			return (1);
		}
		before = cur->prev;
		after = cur->next;
		before->next = after;
		after->prev = before;
		free(cur);
		return (1);
	}
	return (-1);
}
