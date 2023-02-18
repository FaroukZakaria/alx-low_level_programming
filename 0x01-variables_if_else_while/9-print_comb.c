#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
		for (a = 48, b = 48; a < 58;)
		{
			if (b < 58)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				b++;
			}
			else
			{
				b = 48;
				a++;
			}
		}
		return (0);
}
