#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, p;
	long n = 612852475143;
	double s =  sqrt(n);
			for (i = 1; i <= s; i++)
			{
				if (n % i == 0)
				{
					p = n / i;
				}
			}
			printf("%ld\n", p);
			return (0);
}
