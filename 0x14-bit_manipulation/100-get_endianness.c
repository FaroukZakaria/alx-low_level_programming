#include "main.h"
/**
 * get_endianness - s
 * Return: s
 */
int is_little_endian(void)
{
	int num = 1;
	char *c = (char *)&num;

	return (*c == 1);
}
