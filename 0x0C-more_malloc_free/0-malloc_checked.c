#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *void *malloc_checked - Write a function that allocates memory
 *
 *@b: length to allocate in the memory
 *
 *Return: to the pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *aar;

	aar = malloc(b);
	if (aar == NULL)
		exit(98);
	return (aar);
}
