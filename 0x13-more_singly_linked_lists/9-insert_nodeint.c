#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - s
 * @head: s
 * @idx: s
 * @n: s
 * Return: s
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *curnew = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *cur = *head;
		listint_t *new = NULL;

		while (cur != NULL)
		{
			i++;
			cur = cur->next;
		}
		if (i < idx)
		{
			return (NULL);
		}
		else
		{
			i = 0;

			while (i < (idx - 1))
			{
				curnew = curnew->next;
			}
			if (curnew->next->next != NULL)
			{
				listint_t *curr = curnew->next->next;
				curnew->next = new;
				new->next = curr;
			}
			else
			{
				curnew->next = new;
				new->next = NULL;
			}
		}
	}
	return (&new);
}
