#include "main.h"
/**
 * strncpy - hoi
 * @dest: hoi
 * @src: hoi
 * @n: ni-
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
		for (a = 0; src[a] && a <= n; a++)
		{
			dest[a] = src[a];
		}
		return (dest);
}
