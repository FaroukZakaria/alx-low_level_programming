#include "main.h"
/**
 * _memcpy - meme omg
 * @dest: d
 * @src: again...
 * @n: ni-
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
		for (i = 0; i != n; i++)
		{
			dest[i] = src[i];
		}
	return (dest);
}
