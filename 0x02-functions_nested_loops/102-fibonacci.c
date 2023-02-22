#include <stdio.h>
/**
 * main - hoi
 * Return: 0
 */
int main(void)
{
	int i;
	long j = 1, k = 2;
		for (i = 0; i <= 50; i++)
		{
			if (i == 0)
			{
				printf("%d, ", i);
			}
			else if (i == 1)
			{
				printf("%d, ", i);
			}
			else
			{
				k += j;
				j = k - j;
				printf("%ld, ", k);
			}
		}
		printf("\n");
		return (0);
}
