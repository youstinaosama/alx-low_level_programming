#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - set array to 0
 *
 * @nmemb:length to allocate in the memory
 * @size: size to save
 *
 *Return: always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aaa;
	unsigned int a, b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	aaa = (char *) malloc(b);
	if (aaa == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
		aaa[a] = 0;
	return (aaa);
}
