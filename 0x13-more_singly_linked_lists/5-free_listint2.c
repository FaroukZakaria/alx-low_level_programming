#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - s
 * @head: s
 * Return: s
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
	}
}
