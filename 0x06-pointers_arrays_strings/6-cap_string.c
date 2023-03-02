#include "main.h"
/**
 * cap_string - s
 * @str: i hate this word
 * Return: your-
 */
char *cap_string(char *str)
{
	int a = 0;
		while (str[a++])
		{
			if ((str[a] != 0) && ((str[a] > 'a') && (str[a] < 'z')))
			{
				str[a] -= 32;
			}
			if ((str[a] == ' ' || str[a] == '	' || str[a] == '\n' || str[a] == ',' || str[a] == ';' || str[a] == '.' || str[a] == '!' || str[a] == '?' || str[a] == '"' || str[a] == '(' || str[a] == ')' || str[a] == '{' || str[a] == '}'))
			{
				a++;
				if ((str[a] > 'a') && (str[a] < 'z'))
				{
					str[a] -= 32;
				}
			}
		}
		return (str);
}
