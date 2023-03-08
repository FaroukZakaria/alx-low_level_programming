#include "main.h"
#include <stdio.h>
int finder(int n, int i);
/**
 * finder - f
 * @n: ni-
 * @i: i
 * Return: boop
 */
int finder(int n, int i)
{
	int sqrt = i * i;
		if (sqrt > n)
		{
			return (-1);
		}
		if (sqrt == n)
		{
			return (i);
		}
		return (finder(n, i + 1));
}
/**
 * _sqrt_recursion - s
 * @n: ni-
 * Return: ni-
 */
int _sqrt_recursion(int n)
{
	return (finder(n, 1));
}
