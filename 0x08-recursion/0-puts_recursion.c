#include "main.h"

/**
 * _puts_recursion - print the string
 * @str: string to print
 *
 */
void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(str);
}
