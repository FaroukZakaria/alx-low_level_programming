#include "main.h"
/**
 * _strchr - s
 * @s: s
 * @c: c
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i, j;
	int k = '\0';
		while (s++)
		{
			j++;
		}
		for (i = 0; i < j; i++)
		{
			if (s[i] == c)
			{
				return (s);
			}
			if ((i == j) && (k != i))
			{
				return ('\0');
			}
		}
	return (s);
}
