#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *Return: Always 0 (Suces)
 */

int main(void)
{
	int x;
		for (x = 'A'; x <= 'Z'; x++)
		{
			int lower_x = tolower(x);
				if (lower_x = 'e' || lower_x = 'q')
				{
					x++;
				}
				else
				{
					putchar(lower_x);
				}
		}
		putchar('\n');
		return (0);
}
