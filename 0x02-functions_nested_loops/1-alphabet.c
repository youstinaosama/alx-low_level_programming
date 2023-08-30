#include <stdio.h>
/**
 * print_alphabet - prints from a to z
 *
 *Description: This function prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z' ; x++)
	{
		putchar(x);
	}
	printf("\n");
}
