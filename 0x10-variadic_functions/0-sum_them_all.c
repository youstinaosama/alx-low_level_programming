#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - prints the sum of arguments
 *
 *@n: the no. of arguments
 *
 * Return: the sum of arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int y = va_arg(args, int);

		x = x + y;
	}
	va_end(args);
	return (x);
}
