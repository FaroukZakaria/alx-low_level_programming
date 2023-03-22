#include "3-calc.h"
/**
 * main - s
 * @argc: s
 * @argv: s
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	char s;
	int (*func)(int, int);
		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if (!func)
		{
			printf("Error\n");
			exit(99);
		}
		s = *argv[2];
		if ((s == '/' || s == '%') && j == 0)
		{
			printf("Error\n");
			exit(100);
		}
		k = func(i, j);
		printf("%d\n", k);
		return (0);
}
