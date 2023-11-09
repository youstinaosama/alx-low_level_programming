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

	va_start(poo, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(poo, const unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(poo);
}
