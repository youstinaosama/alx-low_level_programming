#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **str_concat - concatenates two strings
 *
 *@s1: the first string
 *@s2: the second string
 *
 * Return: aee
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *aee;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	c = a + b + 1;
	aee = (char *) malloc(c * sizeof(char));
	if (aee == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		aee[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	       aee[a] = s2[b];
	       a++;
	}
	return (aee);
}
