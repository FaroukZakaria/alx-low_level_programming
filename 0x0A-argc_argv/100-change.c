#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - e
 * Return: 0,1
 * @argc: a
 * @argv: a
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int coins = atoi(argv[1]);
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			if (argv[1][0] == '-')
			{
				printf("0\n");
				return (0);
			}
			while (coins > 0)
			{
				total++;
				if ((coins - 25) >= 0)
				{
					coins -= 25;
					continue;
				}
				if ((coins - 10) >= 0)
				{
					coins -= 10;
					continue;
				}
				if ((coins - 5) >= 0)
				{
					coins -= 5;
					continue;
				}
				if ((coins - 2) >= 0)
				{
					coins -= 2;
					continue;
				}
				if ((coins - 1) >= 0)
				{
					coins -= 1;
					continue;
				}
			}
		}
		printf("%d\n", total);
		return (0);
}
