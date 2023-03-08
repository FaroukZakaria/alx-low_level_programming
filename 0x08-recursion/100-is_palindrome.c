#include "main.h"
int _len(char *s);
int iter(char *s, int i, int j);
/**
 * _len - l
 * @s: su-
 * Return: r
 */
int _len(char *s)
{
	if (*s)
	{
		return (1 + _len(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * iter - i
 * @s: su-
 * @i: i
 * @j: j
 * Return: .
 */
int iter(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * is_palindrome - i
 * @s: s
 * Return: 0, 1
 */
int is_palindrome(char *s)
{
	if (*s)
	{
		return (iter(s, 0, _len(s) - 1));
	}
	else
	{
		return (1);
	}
}
