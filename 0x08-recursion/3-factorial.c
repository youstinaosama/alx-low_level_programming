#include "main.h"
#include <stdio.h>

/**
 *factorial - return to -1 or 1
 *@n: given variable
 *
 *Return: 0 or 1 or -1
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n*(factorial(n - 1)));
}
