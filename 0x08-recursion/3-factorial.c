#include "main.h"
/**
 * factorial - i
 * @n: ni-
 * Return -1
 */
int factorial(int n)
{
	n *= factorial(n - 1);
	return (n);
}
