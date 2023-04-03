#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - s
 * @head: s
 * @n: s
 * Return: s
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (listint_t == NULL)
	{
		return (NULL);
	}
	n = new->n;
	new->next = *head;
	*head->next = new;
	return (*head);
}
