#include "main.h"
/**
 * _puts_recursion - s
 * @s: s
 */
void _puts_recursion(char *s)
{
	int i = 0;
		if (s[i] != '\0')
		{
			_putchar(s[_puts_recursion(s[i++])]);
		}
}
