#include <stdio.h>

/**
 * main - hoi
 * Return: 0
 */
int main(void)
{
	int plus;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1h1, f1h2, f2h1, f2h2;
	unsigned long h1, h2;
		for (plus = 0; plus < 92; plus++)
		{
			sum = f1 + f2;
			printf("%lu, ", sum);
			f1 = f2;
			f2 = sum;
		}
		f1h1 = f1 / 10000000000;
		f2h1 = f2 / 10000000000;
		f1h2 = f1 % 10000000000;
		f2h2 = f2 % 10000000000;
		for (plus = 93; plus < 99; plus++)
		{
			h1 = f1h1 + f2h1;
			h2 = f1h2 + f2h2;
			if (f1h2 + f2h2 > 9999999999)
			{
				h1 += 1;
				h2 += 10000000000;
			}
			printf("%lu%lu", h1, h2);
			if (plus != 98)
				printf(", ");
			f1h1 = f2h1;
			f1h2 = f2h2;
			f2h1 = h1;
			f2h2 = h2;
		}
		printf("\n");
		return (0);
}
