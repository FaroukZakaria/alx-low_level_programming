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
			if (b < 58 && a != b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				b++;
			}
			else if (b < 58 && a = b)
			{
				continue;
			}
			else
			{
				b = a + 1;
				a++;
			}
		}
		return (0);
}
