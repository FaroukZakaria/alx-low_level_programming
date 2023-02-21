#include "main.h"
/**
 * print_last_digit - hoi
 * @a: hoi
 * Return: exists
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a *= -1;
	}
	_putchar (48 + a);
	return (a);
}
