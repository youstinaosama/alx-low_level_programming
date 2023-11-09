#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints the arguments
 *
 *@separator: string to be printed between numbers
 *@n: the no. of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list poo;
	unsigned int i;
	unsigned int x;

	va_start(poo, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(poo, const unsigned int);
		printf("%d", x);
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(poo);
}
