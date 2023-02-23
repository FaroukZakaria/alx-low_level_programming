#include "main.h"
/**
 * more_numbers - asd
 */
void more_numbers(void)
{
	int i, j;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 15; j++)
			{
				_putchar('0' + j);
			}
			if (i < 9)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
}
