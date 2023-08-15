#include <stdio.h>
/*
*main - prints the alphabet in lowercase,
*followed by a new line
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
    char ch;
    int i;	    ;

    for (i = 1 ; i <= 10 ; i++)
    {
         for (ch = 'a'; ch <= 'z'; ch++)
         {
	      putchar(ch);
         }	   
         putchar('\n');
    }	 
     
}
