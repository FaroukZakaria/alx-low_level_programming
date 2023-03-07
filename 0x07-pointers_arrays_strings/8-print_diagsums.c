#include "main.h"
/**
 * print_diagsums - i
 * @a: a
 * @size: s
 */
void print_diagsums(int *a, int size)
{
	int i, p = 0, pp = 0;
		for (i = 0; i < size; i++)
		{
			p += a[i];
			a += size;
		}
		a -= size;
		for (i = 0; i < size; i++)
		{
			pp += a[i];
			a -= size;
		}
		printf("%d, %d\n", p, pp);
}
