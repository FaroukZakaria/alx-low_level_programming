#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - s
 * @head: s
 * Return: s
 */
int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *tmp = *head;
		i = tmp->n;

		*head = (*head)->next;
		free(tmp);
	}
	return (i);
}
