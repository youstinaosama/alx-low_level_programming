#include <stdio.h>
#include "main.h"
/**
 * jack_bauer(void)- print every minute of day
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					putchar('\n');
				}
			}
		}
	}
}
