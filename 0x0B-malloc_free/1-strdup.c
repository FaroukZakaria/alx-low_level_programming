#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a
 * @str: s
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
		if (str == NULL)
		{
			return (NULL);
		}
		s = malloc(sizeof(str));
		if (s == 0)
		{
			return (NULL);
		}
		else
		{
			return (*(s + 0));
		}
		return (*s);
}
