#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;

	x = 98;
	y = 42;
	printf("a=%d, b=%d\n", x, y);
	swap_int(&a, &a);
	printf("a=%d, b=%d\n", x, y);
	return (0);
}
