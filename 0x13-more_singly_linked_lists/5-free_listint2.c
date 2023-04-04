#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - s
 * @head: s
 * Return: s
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;

		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
