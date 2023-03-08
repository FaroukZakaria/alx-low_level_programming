#include "main.h"
/**
 * _strlen_recursion - r
 * @s: s
 * Return: a
 */
int _strlen_recursion(char *s)
{
	int i = 0;
		if (*s)
		{
			i++;
			i += _strlen_recursion(s + 1);
		}
}
