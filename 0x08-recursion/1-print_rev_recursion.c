#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints rev of string
 * @s: the string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
