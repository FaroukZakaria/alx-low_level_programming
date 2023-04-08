#include "main.h"
/**
 * get_endianness - s
 * Return: s
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char*)&x;
	return (*c == 1);
}
