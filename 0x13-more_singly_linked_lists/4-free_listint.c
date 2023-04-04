#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - s
 * @head: s
 * Return: s
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
	free(head);
}
