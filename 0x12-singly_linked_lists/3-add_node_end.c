#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - s
 * @head: s
 * @str: s
 * Return: s
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		dup = strdup(str);
		if (dup == NULL)
		{
			free(new);
			return (NULL);
		}
		for (len = 0; str[len];)
			len++;

		new->str = dup;
		new->len = len;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			last = *head;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
		return (*head);
}
