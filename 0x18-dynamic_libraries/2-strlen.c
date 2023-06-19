#include "main.h"
/**
 * _strlen - len
 * @s: s
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;
		while (*s++)
		{
			len++;
		}
		return (len);
}
