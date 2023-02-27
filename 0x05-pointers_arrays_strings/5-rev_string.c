#include "main.h"
/**
 * rev_string - rev
 * @s:
 */
void rev_string(char *s)
{
	for (*s = '\0'; *s >= s[0]; s++)
	{
		_putchar(*s);
	}
}
