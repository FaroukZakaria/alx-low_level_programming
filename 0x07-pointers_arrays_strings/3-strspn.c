#include "main.h"
/**
 * _strspn - e
 * @s: s
 * @accept: a
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l;
		k = 0;
		for (i = 0; s[i] != '\0'; i++)
		{
			l = 0;
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept [j] == s[i])
				{
					k++;
					l = 1;
				}
			}
		}
		return (s);
}
