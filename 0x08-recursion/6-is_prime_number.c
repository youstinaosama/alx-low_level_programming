#include "main.h"
/**
 *is_prime_number - checks if the no. is prime
 *
 *@n: no. to check
 *
 * Return: always 0.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	else if (n % 3 == 0)
		return (0);
	else if (n % 5 == 0)
		return (0);
	else if (n < 3)
		return (0);
	else
		return (1);
}
