#include "main.h"
#include <stdlib.h>
/**
 * str_concat - s
 * @s1: s
 * @s2: s
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
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
		l = malloc((sizeof(char) * (i + j)) + 1);
		if (l == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < (i + j); k++)
		{
			if (s1[k])
			{
				l[k] = s1[k];
			}
			else if (s2[(k - i)])
			{
				l[k] = s2[(k - i)];
			}
			else
			{
				l[k] = '\0';
			}
		}
		return (l);
}
