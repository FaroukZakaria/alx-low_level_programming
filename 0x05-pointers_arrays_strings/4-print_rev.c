#include "main.h"
/**
 * print_rev - rev
 * @s: s
 */
void print_rev(char *s)
{
	for (s = '\0'; s > 0; s--)
	{
		_putchar(*s);
	}
}
