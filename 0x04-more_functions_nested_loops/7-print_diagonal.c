#include "main.h"
/**
 * print_diagonal - a
 * @n: ni-
 */
void print_diagonal(int n)
{
	int i;
		for (i = 1; i < n; i++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			_putchar('\\');
		}
		_putchar('\n');
}
