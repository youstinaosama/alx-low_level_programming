#include "main.h"
/**
 *_pow_recursion - find x power y
 *
 *@x: the no. we multiply
 *@y: the no. of times
 *
 * Return: always 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
	return (1);
}
