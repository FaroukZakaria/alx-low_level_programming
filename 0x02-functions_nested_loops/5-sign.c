#include "main.h"
/**
 * print_sign - hoi
 * @n: ni-
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return -1;
		_putchar('-');
	}
}
