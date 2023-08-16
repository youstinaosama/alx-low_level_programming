#include <stdio.h>

/**
*main - prints the alast digit number,
*followed by a new line
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int lastdigit;
	if (n<0)
		lastdigit= (-1)*n;
	else
		lastdigit=n%10;
	printf("%d", lastdigit);
	return(lastdigit);
}	
