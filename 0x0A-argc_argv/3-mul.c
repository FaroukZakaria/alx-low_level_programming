#include <stdio.h>
#include <stdlib.h>
/**
 * main - e
 * @argc: a
 * @argv: a
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int i, mul;
		if (argc > 2)
		{
			for (i = 1, mul = 1; i < argc; i++)
			{
				mul *= atoi(argv[i]);
			}
			printf("%d\n", mul);
			return (0);
		}
		else
		{
			printf("Error");
			printf("\n");
			return (1);
		}
}
