#include "main.h"
/**
 * _puts_recursion - s
 * @s: s
 * @i: i
 */
void _puts_recursion(char *s, int i)
{
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s, i + 1);
	}
}
