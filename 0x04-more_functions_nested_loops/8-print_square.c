#include "main.h"
/**
 * print_square - f
 */
void print_square(int size)
{
	int i, j;
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (size != 0)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
