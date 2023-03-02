#include "main.h"
/**
 * _strncpy - hoi
 * @dest: hoi
 * @src: ho
 * @n: ni-
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
		for (a = 0; src[a] && a < n; a++)
		{
			dest[a] = src[a];
		}
		for (; a < n; a++)
		{
			dest[a] = '\0';
		}
		return (dest);
}
