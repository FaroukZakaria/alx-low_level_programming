#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - e
 * @argc: a
 * @argv: a
 * Return: 0,1
 */
int main(int argc, char *argv[])
{
	int i, sum;
	unsigned int j;
		if (argc > 1)
		{
			for (i = 1, sum = 0; i < argc; i++)
			{
				for (j = 0; j < strlen(argv[i]); j++)
				{
					if (argv[i][j] < 48 || argv[i][j] > 57)
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
				j++;
			}
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("0\n");
		}
		return (0);
}
