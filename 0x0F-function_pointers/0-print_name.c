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
	f(name);
}
