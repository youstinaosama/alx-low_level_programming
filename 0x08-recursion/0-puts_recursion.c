#include "main.h"

/**
 * _puts_recursion - print the string
 * @s: string to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
