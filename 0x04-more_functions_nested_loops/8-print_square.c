#include <stdio.h>
#include "main.h"
/**
 *print_square-prints square with n #
 *
 *@size: soze of square
 */
void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
