#include "main.h"
/**
 *factorial - gives the factorial
 *
 *@n: no. to moltiply
 *
 *Return: always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (0);
}
