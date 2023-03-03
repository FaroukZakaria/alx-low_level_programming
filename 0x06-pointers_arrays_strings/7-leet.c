#include "main.h"
/**
 * leet - yeet
 * @str: s
 * Return: ni-
 */
char *leet(char *str)
{
	int a = 0, b;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
		while (str[a])
		{
			for (b = 0; b <= 7; b++)
			{
				if (str[a] == leet[b] ||
				str[a] - 32 == leet[b])
					str[a] = b + '0';
			}
			a++;
		}
		return (str);
}
