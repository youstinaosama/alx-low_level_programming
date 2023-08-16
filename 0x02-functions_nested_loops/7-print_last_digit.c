#include <stdio.h>

/**
*main - prints the alast digit number,
*followed by a new line
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int lastdigit;
	lastdigit=n%10;
	_putchar `('0' + lastdigit);
	return(lastdigit);
}	
