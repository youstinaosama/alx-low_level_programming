#include <stdio.h>
/**
 *  * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		putchar(' ');
		if (n != '9')
			putchar(',');
		n++;
	}
	return (0);
}
