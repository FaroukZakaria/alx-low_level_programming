#include "main.h"
/**
 * string_toupper - bruh
 * Return: idk
 */
char *string_toupper(char *str)
{
	int a;
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
