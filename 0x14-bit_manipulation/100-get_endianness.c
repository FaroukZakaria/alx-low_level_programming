#include "main.h"
/**
 * get_endianness - s
 * Return: s
 */
int is_little_endian(void)
{
	int num = 1;
	char *mem = (char *)&num;

	return (*mem == 1);
}
