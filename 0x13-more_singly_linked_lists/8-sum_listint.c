#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - s
 * @head: s
 * Return: s
 */
int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *cur = head;

		while (cur != NULL)
		{
			i += cur->n;
			cur = cur->next;
		}
	}
	return (i);
}
