#include "main.h"
/**
 * _puts_recursion - s
 * @s: s
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(s++);
	}
}
