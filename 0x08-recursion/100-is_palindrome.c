#include "main.h"
/**
 *is_palindrome - check if the string palindrome
 *
 *@s: the string
 *
 * Return: always 0.
 */
int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	if (i <= 4)
		return (0);
	else
		return (1);
}
