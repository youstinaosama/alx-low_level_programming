#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints the arguments
 *
 *@separator: string to be printed between the strings
 *@n: the no. of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list app;
	char *s;

	va_start(app, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(app, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(app);
}
