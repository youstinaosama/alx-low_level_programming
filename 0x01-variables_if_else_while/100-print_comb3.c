#include <stdio.h>
/**
 *  *  * main - Prints all the numbers of base 16 in lowercase.
 *   * Return: Always 0.
 */
int main(void)
{
	int i;
	int k;

	k=1;
	for (i = '0'; i <= '8'; i++)
	{
		for (k = '1'; k <= '9' ; k++)
		{
			if (k > i)
			{
				putchar(i);
				putchar(k);
				if (i == '8' && k == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
