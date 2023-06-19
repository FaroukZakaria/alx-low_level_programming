#include "main.h"
/**
 * _strncat - hoi
 * @dest: hoi
 * @src: hoi
 * @n: ni-
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;
		for (a = 0; dest[a] != '\0';)
		{
			a++;
		}
		for (b = 0; src[b] && b < n; b++)
		{
			dest[a] = src[b];
			a++;
		}
		return (dest);
}
