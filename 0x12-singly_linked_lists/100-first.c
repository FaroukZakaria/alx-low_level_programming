#include <stdio.h>
void __attribute__ ((constructor)) first(void);
/**
 * first - s
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
