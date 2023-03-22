#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - s
 * @name: s
 * @f: s
 * Return: s
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0, j = 0;
		while (name[j])
		{
			_putchar(name[j]);
			j++;
		}
}
