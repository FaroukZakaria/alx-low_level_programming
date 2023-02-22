#include "main.h"
/**
 * times_table - boo
 * Return: ...
 */
void times_table(void)
{
	int x, y, z, u, d;
		for (x = 48; x < 58; x++)
		{
		for (y = 48; y < 58; y++)
		{
		z = x * y;
		if (z > 57)
		{
		u + z % 10;
		d = (z - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(d);
		_putchar(u);
		}
		else
		{
		if (y != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(z);
		}
		}
		_putchar('\n');
		}
}
