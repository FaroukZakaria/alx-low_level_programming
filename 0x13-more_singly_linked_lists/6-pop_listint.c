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
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *tmp = *head;
		free(*head);
		i = tmp->n;
	}
	free(tmp);
	free(head);
	return (i);
}
