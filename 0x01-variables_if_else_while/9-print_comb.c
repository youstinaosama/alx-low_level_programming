#include <stdio.h>
/**
 *  * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n < 9)
		{
			putchar(n);
			putchar(',');
			putchar('\t');
		}
		else
			putchar(n);
	}
	return (0);
}
