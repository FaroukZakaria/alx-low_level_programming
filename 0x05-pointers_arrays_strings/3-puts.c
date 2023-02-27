#include "main.h"
/**
 * _puts - wth
 * @str: str
 */
void _puts(char *str)
{
	while (*str++)
	{
		_putchar(str);
		str++;
	}
}
