#include "lists.h"
/**
 * add_dnodeint_end - s
 * @head: s
 * @n: s
 * Return: s
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (node == NULL)
		return (NULL);
	while (temp != NULL)
		temp = temp->next;
	temp->next = node;
	node->n = n;
	node->prev = temp;
	node->next = NULL;
	return (node);
}
