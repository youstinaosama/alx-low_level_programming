#include "main.h"
/**
 *_print_rev_recursion - reverse a string
 *
 *@s: the string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s-1);
	}
	else
		_putchar(*s);
	_putchar('\n');
}
