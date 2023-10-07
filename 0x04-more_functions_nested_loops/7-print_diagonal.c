#include <stdio.h>
#include "main.h"
/**
 *print_diagonal-prints the charcter \
 *
 *with n times sepaces before it
 *
 *@n: no of times
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
