#include <stdio.h>
/*
* main - Entry point
* Return: Always 0 (Success)
* print_alphabet - entry point * * Description: This function prints the alphabet, in lowercase
*/
void print_alphabet(void)	
{
	char x;

	for (x= 'a' ; x <= 'z' ; x++)
	{	
		putchar(x);
	}	
	printf("\n");
}
