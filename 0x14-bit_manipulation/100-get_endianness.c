#include "main.h"
/**
 * get_endianness - s
 * Return: s
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	return (*c == 1);
}
