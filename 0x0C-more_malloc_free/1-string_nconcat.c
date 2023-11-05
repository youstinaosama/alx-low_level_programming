#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings.
 *
 *@s1: the first string
 *@s2: the second string
 *@n: the length of s2
 * Return:the pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, c;
	unsigned int b;
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
	if (n > b)
		n = b;
	aee = (char *) malloc(c * sizeof(char));
	if (aee == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		aee[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		aee[a] = s2[b];
		a++;
	}
	return (aee);
}
