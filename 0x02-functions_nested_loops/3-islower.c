#include "main.h"
#include <stdio.h>
/*
*_islower : Checks the small alphapet_
@c: character to compare
*Return: 1 if true, 0 if false
*/
int _islower(int c)
{
	if (c >= 97 && c <= 127)
	   return (1);
   return (0);
}
		
	   
