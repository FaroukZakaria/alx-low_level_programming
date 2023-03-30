#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - s
 * @head: s
 * Return: s
 */
void free_list(list_t *head)
{
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
