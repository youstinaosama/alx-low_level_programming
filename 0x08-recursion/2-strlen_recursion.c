#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - print the length
 * @s: string 
 *    * Return: s+1.
 */
int _strlen_recursion(char *s)
{
	if ( *s != '\0')
		return (_strlen_recursion(s+1)+1);
	return (0);
}
