#include "main.h"
/**
 * puts_half - p
 * @str: s
 */
void puts_half(char *str)
{
	int i = 0;
		while (str[i++])
		{
			i++;
		}
		if (i % 2 == 0)
		{
			for (*str = i / 2; str[i] != '\0'; str++)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			for (*str = (i - 1) / 2; str[i] != '\0'; str++)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
}
