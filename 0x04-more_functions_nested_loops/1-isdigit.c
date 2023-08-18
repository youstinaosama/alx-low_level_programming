#include "main.h"
/**
 * int _isdigit(int c)int - check the c code
 *
 * @c : character to check
 * Return: when digit 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	       return (1);
	return (0);
}
