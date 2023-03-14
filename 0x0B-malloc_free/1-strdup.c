#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a
 * @str: s
 * Return: s
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;
		if (str == NULL)
		{
			return (NULL);
		}
		while (str[i])
		{
			i++;
		}
		s = malloc((sizeof(char) * i) + 1);
		if (s == 0)
		{
			return (NULL);
		}
		else
		{
			while (j < i)
			{
				s[j] = str[j];
				j++
			}
		}
		s[a] = '\0';
		return (s);
}
