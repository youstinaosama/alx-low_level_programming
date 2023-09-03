#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - give the power
 *@x: number to multiply
 *@y: no. of multiplication
 *
 *Return: -1 or x **y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
