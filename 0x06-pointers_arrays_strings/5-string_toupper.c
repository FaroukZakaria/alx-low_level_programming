#include "main.h"
/**
 * string_toupper - bruh
 * @str: hi
 * Return: idk
 */
char *string_toupper(char *str)
{
	int a = 0;
		while (str[a])
		{
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				str[a] -= 32;
				a++;
			}
		}
		return (str);
}
