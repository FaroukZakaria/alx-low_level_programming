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
			_strlen_recursion(s + 1);
			i++;
		}
		return (i);
}
