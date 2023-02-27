#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - g
 * program 101-crackme.
 * Return: Always 0
 */
int main(void)
{
	char pw[84];
	int i = 0, sum = 0, mh1, mh2;
		srand(time(0));
		while (sum < 2772)
		{
			pw[i] = 33 + rand() % 94;
			sum += pw[i++];
		}
		pw[i] = '\0';
		if (sum != 2772)
		{
			mh1 = (sum - 2772) / 2;
			mh2 = (sum - 2772) / 2;
			if ((sum - 2772) % 2 != 0)
			{
				mh1++;
				for (i = 0; p[i]; i++)
				{
					if (pw[i] >= (33 + mh1))
					{
						pw[i] -= mh1;
						break;
					}
				}
				for (i = 0; pw[i]; i++)
				{
					if (pw[i] > = (33 + mh2))
					{
						pw[i] -= mh2;
						break;
					}
				}
			}
		}
		printf("%s", pw);
		return (0);
}
