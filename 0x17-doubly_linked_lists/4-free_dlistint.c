#include "lists.h"
/**
 * free_dlistint - s
 * @head: s
 * Return: s
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (tmp == NULL)
		return (NULL);
	while (tmp)
	{
		tmp = head;
		head = head->next;
		tmp->next = NULL;
		tmp->prev = NULL;
		head->prev = NULL;
		free (tmp);
	}
}
