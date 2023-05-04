#include "main.h"
/**
 * get_endianness - s
 * Return: s
 */
int is_little_endian(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (*c == 1);
}
