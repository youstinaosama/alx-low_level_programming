#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **_strdup- eturns a pointer to copy of the string given
 *
 * @str: given string
 *
 *Return: arr
 */
char *_strdup(char *str)
{
	int i, c;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	arr = (char *) malloc((i + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		arr[c] = str[c];
	return (arr);
}


