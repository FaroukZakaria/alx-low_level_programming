#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - s
 * @name: s
 * @f: s
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	else
	{
	f(name);
	}
}
