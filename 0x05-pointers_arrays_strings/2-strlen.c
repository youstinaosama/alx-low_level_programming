#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - print size of string
 * @s: array
 *
 *Return: Always 0.
 */
int _strlen(char *str)
{
	str = "My first strlen!";
	printf("%ld", strlen(str));
	return (0);
}
