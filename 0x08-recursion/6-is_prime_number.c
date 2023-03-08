#include "main.h"
/**
 * _check - c
 * @n: ni-
 * @i: i-
 * Return: bruh
 */
int _check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if ((n % i) == 0 && (i > 1))
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (_check(n, (i + 1)));
}
/**
 * is_prime_number - i
 * @n: ni-
 * Return: 0, 1
 */
int is_prime_number(int n)
{
	return (_check(n, 1));
}
