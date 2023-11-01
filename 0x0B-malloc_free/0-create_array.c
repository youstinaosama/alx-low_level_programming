#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array -  creates an array and initializes it with a specific char
 *
 *@size: size of the array
 *@c: the char
 *
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *poi;
	unsigned int i;

	poi = (char *) malloc(size * sizeof(char));
	if (poi == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		poi[i] = c;
	return (poi);
}
