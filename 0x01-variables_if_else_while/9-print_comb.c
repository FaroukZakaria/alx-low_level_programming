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
			putchar(a);
			if (b < 58)
			{
				putchar(b);
				putchar(", ");
				b++;
			}
			else
			{
				b = 48;
				a++;
			}
		}
		putchar('\n');
		return (0);
}
