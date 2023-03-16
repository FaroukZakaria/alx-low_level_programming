#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - s
 * @s1: s
 * @s2: s
 * @n: ni-
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k = 0, l = 0, m = 0;
	char *j;
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		while (s1[i])
			i++;
		while (s2[k])
			k++;
		if (n >= k)
			m = i + k;
		else
			m = i + n;
		j = malloc(sizeof(char) * m + 1);
		if (j == NULL)
			return (NULL);
		k = 0;
		while (l < m)
		{
			if (l <= i)
				j[l] = s1[l];
			if (l >= i)
			{
				j[l] = s2[k];
				k++;
			}
			l++;
		}
		j[l] = '\0';
		return (j);
}
