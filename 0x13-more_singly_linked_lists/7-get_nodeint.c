#include "lists.h"
/**
 * get_nodeint_at_index - a
 * @head: s
 * @index: s
 * Return: s
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *tmp = head;
		unsigned int i, j;

		while (tmp != NULL)
		{
			i++;
			tmp = tmp->next;
		}
		if (index >= i)
		{
			return (NULL);
		}
		else
		{
			tmp = head;

			for (j = 0; j <= index; j++)
			{
				if (j == index)
				{
					return (tmp);
				}
				tmp = tmp->next;
			}
		}
	}
	return (NULL);
}
