#include "main.h"
/**
 * jack_bauer - hoi
 * @a: hoi
 * Return: do i need it?
 */
void jack_bauer(void)
{
	int a, b, c, d;
		for (a = 48; a < 51; a++)
		{
		for (b = 48; b < 52; b++)
		{
		if (a <= 50 && b <= 51)
		{
		for (c = 48; c < 54; c++)
		{
		for (d = 48; d < 58; d++)
		{
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
		}
		}
		}
}
