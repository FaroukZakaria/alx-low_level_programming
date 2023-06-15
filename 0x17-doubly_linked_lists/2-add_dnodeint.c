#include "lists.h"
/**
 * add_dnodeint - s
 * @head: s
 * @n: s
 * Return: s
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
