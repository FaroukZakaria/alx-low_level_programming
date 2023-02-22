#include "main.h"
/**
 * times_table - boo
 * Return: ...
 */
void times_table(void)
{
	int x, y, z, u, d;
		for (x = 0; x <= 9; x++)
		{
		for (y = 0; y <= 9; y++)
		{
		z = x * y;
		if (z > 9)
		{
		u = z % 10;
		d = (z - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar('0' + d);
		_putchar('0' + u);
		}
		else
		{
		if (y != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar('0' + z);
		}
		}
		_putchar('\n');
		}
}
