#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - gives the length of the string
 *
 * @s : the sreng
 *
 * Return: always the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_strlen_recursion(s - 1);
	}
	return (*s);
}
