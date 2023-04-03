#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - s
 * @head: s
 * @n: s
 * Return: s
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cur;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return NULL;
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new;
	}
	return (new);
}
