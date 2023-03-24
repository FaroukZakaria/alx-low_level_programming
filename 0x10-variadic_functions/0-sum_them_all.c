#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - s
 * @n: s
 * Return: idk
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, args);
	int i, sum = 0;
		for (i = 0; i < args; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return(sum);
}
