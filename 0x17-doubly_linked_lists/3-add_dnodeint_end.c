#include "lists.h"
/**
 * add_dnodeint_end - s
 * @head: s
 * @n: s
 * Return: s
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
	return (node);
}
