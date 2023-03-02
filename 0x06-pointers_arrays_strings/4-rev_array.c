#include "main.h"
/**
 * reverse_array - hoi
 * @a: hoi
 * @n: ni-
 */
void reverse_array(int *a, int n)
{
	int b;
	int rev;
		for (b = n - 1; b >= n / 2; b--)
		{
			rev = a[n - 1 - b];
			a[n - 1 - b] = a[b];
			a[b] = rev;
		}
}
