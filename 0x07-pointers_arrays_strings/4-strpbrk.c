#include "main.h"
/**
 * _strpbrk - s
 * @s: s
 * @accept: a
 * Return: r
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (*s == accept[i])
				{
					return (s);
				}
			}
			s++;
		}
		return ('\0');
}
