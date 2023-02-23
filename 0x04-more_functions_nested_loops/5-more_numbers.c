#include "main.h"
/**
 * more_numbers - .
 */
void more_numbers(void)
{
	int i, j;
		for (i = 0; i < 10; i++)
		{
			for (j = 48; j < 48; j++)
			{
				_putchar(j);
			}
			if (i < 8)
			{
				_putchar('\n');
			}
		}
}
