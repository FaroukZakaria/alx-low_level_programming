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

	while (i < index - 1)
	{
		if (*head == NULL)
			return (NULL);
		*head = (*head)->next;
		i++;
	}

