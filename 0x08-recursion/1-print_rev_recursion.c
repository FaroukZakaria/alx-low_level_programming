#include "main.h"
/**
 * _print_rev_recursion - s
 * @s: s
 */
void _print_rev_recursion(char *s)
{
	_putchar(s['\0'] - 1);
	s--;
}
