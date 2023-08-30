#include <stdio.h>
#include "main.h"
/**
 * print_to_98- print numbers from n
 *
 * @n: number to start
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d\t", i);
			if (i == 98)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d\t", i);
			if (i == 98)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
