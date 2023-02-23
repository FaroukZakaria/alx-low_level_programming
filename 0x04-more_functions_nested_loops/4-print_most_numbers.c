#include "main.h"
/**
 * print_most_numbers - 2 4 bad
 */
void print_most_numbers(void)
{
	for (int i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
