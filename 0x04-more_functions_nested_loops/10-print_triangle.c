#include "main.h"
/**
 * print_triangle - e
 * @size: big
 */
void print_triangle(int size)
{
	int i, j;
		if (size > 0)
		{
			for (i = size; i > 0; i--)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('#');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
