#include <stdio.h>
/**
*print_alphabet_x10- print alphabet small
*
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
