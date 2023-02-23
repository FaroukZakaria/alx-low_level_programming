#include "main.h"
/**
 * print_line - a
 * @n: ni-
 */
void print_line(int n)
{
	int i;
		for (i = 1; i <= n; i++)
		{
			if (n == 0)
			{
				_putchar('\n');
			}
			else if (n > 0)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
}
