#include "main.h"
/**
 * _pow_recursion - a
 * @x: x
 * @y: y
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	int i;
		if (y < 0)
		{
			return (-1);
		}
		i = x * _pow_recursion(x, y - 1);
		return (i);
}
