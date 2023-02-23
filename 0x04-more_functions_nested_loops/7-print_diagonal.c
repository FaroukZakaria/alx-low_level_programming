#include "main.h"
/**
 * print_diagonal - a
 * @n: ni-
 */
void print_diagonal(int n)
{
	int i, j;
		if (n > 0)
		{
			for (j = 1; j <= n; j++)
			{
				for (i = 1; i <= n; i++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
}
