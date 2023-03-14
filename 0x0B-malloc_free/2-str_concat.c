#include <stdlib.h>
#include "main.h"
/**
 * str_concat - s
 * @s1: s
 * @s2: s
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *l;
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		while (s1[i])
		{
			i++;
		}
		while (s2[j])
		{
			j++;
		}
		m = i + j;
		l = malloc((sizeof(char) * m) + 1);
		if (l == NULL)
		{
			return (NULL);
		}
		j = 0;
		while (k < m)
		{
			if (k <= i)
			{
				l[k] = s1[k];
			}
			if (k >= i)
			{
				l[k] = s2[j];
				j++;
			}
			k++;
		}
		l[k] = '\0';
		return (l);
}
