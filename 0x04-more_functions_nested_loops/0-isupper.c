#include <stdio.h>
#include "main.h"

/**
 *int _isupper - check if  the c is uppercase.
 *@c: the variable to check : 
 *Return: 1 if uppercase
 .returns 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return(1);
	return(0);
}	
