#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	for(x = 'A'; x <= 'Z'; x++)
	{
	int lower_x = tolower(x);
	putchar(lower_x);
	}
}
