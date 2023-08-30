#include <stdio.h>
/**
 *  *  *  * main - Prints all the numbers of base 16 in lowercase.
 *   *   * Return: Always 0.
 */
int main(void)
{
	int i;
	int k;
	int j;

	for (i = '0'; i <= '7'; i++)
	{
		for (k = '1'; k <= '8' ; k++)
		{
			for (j = 2; j <= '9'; j++)
			{
				if (k > i && j > k)
				{
					putchar(i);
					putchar(k);
					putchar(j);
					if (i == '7' && k == '8' && j == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
