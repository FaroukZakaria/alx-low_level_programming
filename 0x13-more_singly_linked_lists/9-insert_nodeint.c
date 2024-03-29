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
	listint_t *new = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		unsigned int i = 0;
		listint_t *curnew = *head;
		listint_t *cur = *head;
		new->n = n;
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
					i++;
				}
				if (curnew->next != NULL)
				{
					listint_t *curr = curnew->next;
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
	return (new);
}
