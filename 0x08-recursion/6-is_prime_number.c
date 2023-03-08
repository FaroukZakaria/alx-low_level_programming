#include "main.h"
/**
 * is_prime_number - i
 * @n: ni-
 * Return: 0, 1
 */
int check(int n, int i)
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
	return (check(n, (i + 1)));
}
int is_prime_number(int n)
{
	return (check(n, 1));
}
